/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_commented.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:07:11 by hde-souz          #+#    #+#             */
/*   Updated: 2023/11/20 23:56:00 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

// Function to parse the current line and concatenate it with the existing buffer
char	*parse_line(char *new_line, char *buffer, int buff_size, int *line_len)
{
	// Declare variables
	char	*line;
	int index = 0;
	int size_line = 0;
	int buffer_index = 0;

	// Point 'line' to the start of the current line
	line = new_line;

	// Update the total line length
	*line_len += buff_size;

	// Allocate memory for the new line
	new_line = malloc(*line_len + 1 * sizeof(char));

	if (new_line)
	{
		// Set the null terminator for the new line
		new_line[*line_len] = '\0';

		// Copy the existing line into the new_line buffer
		while (line && line[size_line])
			new_line[index++] = line[size_line++];

		// Reset size_line for buffer processing
		size_line = 0;

		// Copy the buffer content into the new_line buffer
		while (buffer && buffer[size_line])
		{
			if (size_line < buff_size)
				new_line[index++] = buffer[size_line];
			else
				buffer[buffer_index++] = buffer[size_line];

			// Set the current buffer element to 0 (null character)
			buffer[size_line++] = 0;
		}
	}

	// Free the old line buffer
	free(line);

	// Return the new_line buffer && handles null malloc
	return (new_line);
}

// Function to read from the file descriptor and retrieve the next line
char	*read_bf(int fd, char buffer[][BUFFER_SIZE + 1], int *sz_bf)
{
	// Declare variables
	int flag = 1;
	int size_line = 0;
	char *line = NULL;

	// Loop until the end of file or newline character is encountered
	while (flag > 0)
	{
		// If the current buffer is empty, read from the file descriptor
		if (!buffer[fd][0])
			*sz_bf = read(fd, buffer[fd], BUFFER_SIZE);

		// Update the flag with the current buffer size
		flag = *sz_bf;

		// If there are characters in the buffer
		if (*sz_bf > 0)
		{
			*sz_bf = 0;

			// Find the position of the newline character or reach the end of buffer
			while (buffer[fd][*sz_bf] && buffer[fd][*sz_bf] != '\n')
				(*sz_bf)++;

			// Update the flag based on whether a newline character was found
			flag = (flag == *sz_bf);

			// Include the newline character in the count and parse the line
			*sz_bf += buffer[fd][*sz_bf] == '\n';
			line = parse_line(line, buffer[fd], *sz_bf, &size_line);
		}
		// If there was an error reading from the file descriptor
		else if (*sz_bf == -1)
		{
			// Free the line buffer and set it to NULL
			free(line);
			line = NULL;
		}
	}
	// Return the parsed line
	return (line);
}

// Function to get the next line from a given file descriptor
char	*get_next_line(int fd)
{
	// Static buffer to store data for each file descriptor
	static char	buffer[FOPEN_MAX][BUFFER_SIZE + 1];

	// Initialize buffer size variable
	int sz_bf = 0;

	// Check if the file descriptor is valid
	if (fd < 0 || fd > FOPEN_MAX)
		return (NULL);

	// Find the size of the existing buffer for the given file descriptor
	while (buffer[fd][sz_bf])
		sz_bf++;

	// Read and return the next line from the file descriptor
	return (read_bf(fd, buffer, &sz_bf));
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
        fprintf(stderr, "Wrong call! Try: %s file1 file2 file3 ...\n", argv[0]);
    return 0;
} */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line_bonus.h"

int main()
{
    // List of file names to test
    char *file_names[] = {"test1.txt", "test2.txt"};

    for (int i = 0; i < sizeof(file_names) / sizeof(file_names[0]); i++)
    {
        int fd = open(file_names[i], O_RDONLY);
        if (fd == -1)
        {
            perror("Error opening file");
            continue;
        }

        char *line;
        while ((line = get_next_line(fd)))
        {
            printf("%s", line);
            free(line);
        }

        close(fd);
    }

    return 0;
}
