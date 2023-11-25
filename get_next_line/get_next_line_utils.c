/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:18:19 by hde-souz          #+#    #+#             */
/*   Updated: 2023/11/22 20:01:05 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*	COMMENTED VERSION

char    *parse_line(char *new_line, char *buffer, int sz_bf, int *line_len)
{
        char    *line; //here we update the buffer and return its new version

        line = new_line; 
        auto int new_line_i = 0; //track the position in the new_line buffer
        auto int line_i = 0; //iterate thru chars of the existing 'line'
        auto int buffer_i = 0; //track the position in the original buffer

        //prepare space for the new line to be concatenated, and malloc it
        *line_len += sz_bf;
        new_line = malloc(*line_len + 1 * sizeof(char));

        //
        if (new_line)
        {
                //set null byte on this lil bitch
                new_line[*line_len] = 0;

                //iterate through chars of existing 'line' until end is reached
                while (line && line[line_i])
                        new_line[new_line_i++] = line[line_i++];

                //prepares the index to iterate through the original buffer
                line_i = 0;

                //iterates thru the chars of the buffer until the end is reached
                while (buffer && buffer[line_i])
                {
                        //if there are still characters in the buffer
                        if (line_i < sz_bf)
                                //copies chars from the buffer to the new_line
                                new_line[new_line_i++] = buffer[line_i];
                        else //buffer fully processed
                                //updates the original buffer by shifting the 
                                //remaining characters to the beginning
        To complete the bonus part, you have the possibility to set up extra
services. In this case, you may open more ports to suit your needs.
Of course, the UFW/Firewalld rules has to be adapted accordingly.                        buffer[buffer_i++] = buffer[line_i];

                        //sets the current char in the buffer to zero
                        buffer[line_i++] = 0;
                }
        }
        //free as its content has been copied to the new_line, which is returned
        free (line);
        return (new_line);
}

char    *read_bf(int fd, char buffer[][BUFFER_SIZE + 1], int *sz_bf)
{
        auto int flag = 1;
        int line_i = 0;
        char *line = NULL;

        //with flag = 1, we loop til the end of file or \n is encountered
        //outer loop that basically checks if there's more data to be read
        //persists until EOF
        while (flag > 0)
        {
                //if buffer !empty, read [NBYTEs +1] from FD into BUFFER[fd]
                if (!buffer[fd][0])
                        *sz_bf = read(fd, buffer[fd], BUFFER_SIZE + 1);

                //conditional check if the flag is still positive
                flag = *sz_bf;

                //if data was read (*sz_bf contains the number of bytes read)
                //inner loop, checkes whether there are chars to be processed
                //persists until newline is found or reach end of buffer
                if (*sz_bf > 0)
                {
                        //set to zero, prepating for further iteration
                        *sz_bf = 0;

                        //if no \n is found, remains equal
                        while (buffer[fd][*sz_bf] && buffer[fd][*sz_bf] != '\n')
                                (*sz_bf)++;

                        //if \n found, *sz_bz remained = false boolean (0)
                        //if \n not found, *sz_bz iterated = true boolean (1)
                        flag = (flag == *sz_bf);
                        //if current position is \n = false boolean (0)
                        //if current position not \n = true boolean (1)
                        *sz_bf = (*sz_bf + buffer[fd][*sz_bf]) == '\n';

                        //we finally parse the line
                        line = parse_line(line, buffer[fd], *sz_bf, &line_i);
                }
                else if (*sz_bf == -1)
                {
                        //handles read result -1 which is error
                        free(line);
                        line = NULL;
                }
        }
        //returned the parset line
        return (line);

}

char    *get_next_line(int fd)
{
        // static buffer to store data for each fd (bidimensional)
        static char     buffer[FOPEN_MAX][BUFFER_SIZE + 1];

        // resets buffer to zero on every call
        auto int sz_bf = 0;

        //protects the shit out of the code
        if (fd < 0 || fd > FOPEN_MAX)
                return (NULL);

        //find the size of the existing buffer for the given fd
        while (buffer[fd][sz_bf])
                sz_bf++;

        //reads from (fd) into an array (buffer), dynam. allocates a string
        //representing the next line and updates the buffer size (sz_bf). 
        //Returns NULL on error.
        return(read_bf(fd, buffer, &sz_bf));
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
}*/
