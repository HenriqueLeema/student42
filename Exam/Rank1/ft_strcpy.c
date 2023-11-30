/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:44:48 by hde-souz          #+#    #+#             */
/*   Updated: 2023/11/30 23:07:32 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../examlib.h"

// alternative 1

char    *ft_strcpy(char *s1, char *s2)
{
    auto int i = 0;
    while(s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = s2[i];
    return (s1);
}

// alternative 2

char    *ft_strcpy(char *s1, char *s2)
{
    auto int i = 0;
    while ((s1[i] = s2[i]))
        i++;
    return (s1);
}

// only a function is requested

int main(int argc, char **argv)
{
    char *s1 = argv[1];
    char *s2 = argv[2];
    
    if(argc == 3)
    {
        printf("s1 and s2 were: '%s' and '%s'\n", s1, s2);
        ft_strcpy(s1, s2);
        printf("s1 and s2 became: '%s' and '%s'\n", s1, s2);
    }
    else
        printf("Invalid argument count\nTry: ./a.out argument1 argument2\n");
    return (0);
}