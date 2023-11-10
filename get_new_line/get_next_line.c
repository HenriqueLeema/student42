/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:17:55 by hde-souz          #+#    #+#             */
/*   Updated: 2023/11/10 19:57:04 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*parse_line(char *new_line, char *buffer, int buff_size, int *line_len)
{
	char	*line;

	auto int index = 0;
	auto int size_line = 0;
	auto int buffer_index = 0;
	line = new_line;
	*line_len += buff_size;
	new_line = malloc(*line_len + 1 * sizeof(char));
	if (new_line)
	{
		new_line[*line_len] = 0;
		while (line && line[size_line])
			new_line[index++] = line[size_line++];
		size_line = 0;
		while (buffer && buffer[size_line])
		{
			if (size_line < buff_size)
				new_line[index++] = buffer[size_line];
			else
				buffer[buffer_index++] = buffer[size_line];
			buffer[size_line++] = 0;
		}
	}
	free(line);
	return (new_line);
}

char	*get_next_line(int fd)
{
	int			flag;
	int			size_buffer;
	int			size_line;
	char		*line;
	static char	buffer[FOPEN_MAX][BUFFER_SIZE + 1];

	flag = 1;
	size_buffer = 0;
	line = NULL;
	size_line = 0;
	if ((fd < 0 || fd > FOPEN_MAX) || !BUFFER_SIZE)
		return (NULL);
	while (buffer[fd][size_buffer])
		size_buffer++;
	while (flag > 0)
	{
		if (!buffer[fd][0])
			size_buffer = read(fd, buffer[fd], BUFFER_SIZE);
		flag = size_buffer;
		if (size_buffer > 0)
		{
			size_buffer = 0;
			while (buffer[fd][size_buffer] && buffer[fd][size_buffer] != '\n')
				size_buffer++;
			flag = (flag == size_buffer);
			size_buffer += buffer[fd][size_buffer] == '\n';
			line = parse_line(line, buffer[fd], size_buffer, &size_line);
		}
		else if (size_buffer == -1)
		{
			free(line);
			line = NULL;
		}
	}
	return (line);
}
/* int main(int argc, char **argv)
{
    char *line;

    if (argc >= 3)
    {
        for (int i = 1; i < argc; i++)
        {
            int fd = open(argv[i], O_RDONLY);
            if (fd == -1)
            {
                perror("Error opening file");
                continue;
            }

            while ((line = get_next_line(fd)))
            {
                printf("%s", line);
                free(line);
            }

            close(fd);
        }
    }
    else
    {
        fprintf(stderr, "Usage: %s <file1> <file2> ... <fileN>\n", argv[0]);
    }

    return 0;
} */
