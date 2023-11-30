/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:44:56 by hde-souz          #+#    #+#             */
/*   Updated: 2023/11/30 23:17:27 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../examlib.h"

int ft_strlen(char *str)
{
    auto int i = 0;
    while (str[i])
        i++;
    return (i);
}

// only a function is requested

int main(int argc, char **argv)
{
    char *str = argv[1];

    if (argc == 2)
        printf("The length of '%s' is: %i\n", str, ft_strlen(str));
    else
        printf("Invalid argument count\nTry: ./a.out argument1 argument2\n");
    return (0);
}