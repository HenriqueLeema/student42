/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:43:50 by hde-souz          #+#    #+#             */
/*   Updated: 2023/11/30 23:07:22 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../examlib.h"

// alternative 1

void    ft_putstr(char *str)
{
    while (*str != '\0')
        write(1, str++, 1);
}

// alternative 2

void    ft_putstr(char *str)
{
	auto int i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
}

// only a function is requested

int main(int argc, char **argv)
{
    if (argc == 2)
        ft_putstr(argv[1]);
    else
        printf("Invalid argument count\nTry: ./a.out argument1 argument2\n");
    return (0);
}