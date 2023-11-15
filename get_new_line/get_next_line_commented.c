/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_commented.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:07:11 by hde-souz          #+#    #+#             */
/*   Updated: 2023/11/15 22:57:04 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*	This function takes a new line, a buffer, the buffer size, and a pointer to the line length.
	It concatenates the new line with the buffer and returns the concatenated line.
*/

char	*parse_line(char *new_line, char *buffer, int buff_size, int *line_len)
{
    // Declare a pointer to the previous line
    char	*line;

    // Declare variables to keep track of the current index in the new line and the buffer
    auto int index = 0;
    auto int size_line = 0;
    auto int buffer_index = 0;

    // Set the previous line to the new line
    line = new_line;

    // Update the line length to include the buffer size
    *line_len += buff_size;

    // Allocate memory for the new line
    new_line = malloc(*line_len + 1 * sizeof(char));

    // If memory allocation was successful, concatenate the previous line and the buffer
    if (new_line)
    {
        // Set the last character of the new line to null byte
        new_line[*line_len] = 0;

        // Copy the previous line to the new line
        while (line && line[size_line])
            new_line[index++] = line[size_line++];

        // Copy the buffer to the new line
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

    // Free the previous line and return the new line
    free(line);
    return (new_line);
}

/*	This function reads a file descriptor and returns the next line of the file.
	It takes the file descriptor, a buffer, and a pointer to the buffer size.
	It reads the buffer and searches for the next newline character.
	If it finds a newline character, it calls the parse_line function to extract the line from the buffer and return it.
	If it does not find a newline character, it continues to read the file descriptor into the buffer until it finds one.
*/

char	*read_bf(int fd, char buffer[][BUFFER_SIZE + 1], int *sz_bf)
{
    auto int flag = 1;
    auto int size_line = 0;
    auto char *line = NULL;
    while (flag > 0)
    {
        // If the buffer is empty, read from the file descriptor
        if (!buffer[fd][0])
            *sz_bf = read(fd, buffer[fd], BUFFER_SIZE);
        flag = *sz_bf;
        if (*sz_bf > 0)
        {
            // Search for the next newline character in the buffer
            *sz_bf = 0;
            while (buffer[fd][*sz_bf] && buffer[fd][*sz_bf] != '\n')
                (*sz_bf)++;
            // If the character at the current position in the buffer is a newline character,
            // then increment 'sz_bf' by 1 to condition the loop to read the next line.
            *sz_bf += buffer[fd][*sz_bf] == '\n';
            // Parse the current line and update the size of the line
            line = parse_line(line, buffer[fd], *sz_bf, &size_line);
        }
        // If read returned -1 to sz_bf, we handle the error by
        // freeing the memory alocated to 'line' and setting is as null
        // so that we return null upon error
        else if (*sz_bf == -1)
        {
            free(line);
            line = NULL;
        }
    }
    return (line);
}

/*	This function initializes a static buffer for each file descriptor and reads the file descriptor into the buffer.
	It then calls the read_bf function to parse the buffer and return the next line of the file.
*/
char	*get_next_line(int fd)
{
    // Declare a static buffer for each file descriptor
    static char	buffer[FOPEN_MAX][BUFFER_SIZE + 1];

    // Declare a variable to keep track of the number of characters read into the buffer
    auto int sz_bf = 0;

    // Handle invalid file descriptor input by returning NULL
    if (fd < 0 || fd > FOPEN_MAX)
        return (NULL);

    // Iterate through the buffer for the specified file descriptor until it reaches the end of the buffer or encounters a null byte
    // This allows the function to determine how many characters have already been read into the buffer for that file descriptor
    // so that it can continue reading from where it left off
    while (buffer[fd][0])
        sz_bf++;

    // Call the read_bf function to read the file descriptor and return the next line of the file
    return (read_bf(fd, buffer, &sz_bf));
}






int main(int argc, char **argv)
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
}