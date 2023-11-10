/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:18:36 by hde-souz          #+#    #+#             */
/*   Updated: 2023/11/10 19:54:34 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include      <fcntl.h>
# include      <stdio.h>
# include       <stdlib.h>
# include       <unistd.h>
# include       <limits.h>
#include <string.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 32
#endif

#ifndef FOPEN_MAX
# define FOPEN_MAX 256
#endif

typedef struct s_fd_data
{
    int fd;
    char buffer[BUFFER_SIZE + 1];
    struct s_fd_data *next;
} t_fd_data;

char	*get_next_line(int fd);
char	*parse_line(char *line, char *buffer, int size_buffer, int *size_line);
void	read_file(int fd, char *buffer);

#endif