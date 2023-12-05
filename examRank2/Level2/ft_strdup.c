/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:46:07 by hde-souz          #+#    #+#             */
/*   Updated: 2023/12/05 21:55:54 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../examlib.h"

char    *ft_strdup(char *src)
{
        char    *dest;
        auto int size = 0;
        auto int i = 0;
        
        while (src[size])
                size++;

        dest = malloc(sizeof(*dest) * (size + 1));

        if (dest != NULL)
        {
                while(src[i])
                {
                        dest[i] = src[i];
                        i++;
                }
                dest[i] = '\0';
        }
        return (dest);
}

int     main(int argc, char **argv)
{
        if (argc == 2)
        {
                printf("%s\n", ft_strdup(argv[1]));
                printf("%s\n", strdup(argv[1]));
        }       
        return (0);
}