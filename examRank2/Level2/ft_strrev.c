/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:46:15 by hde-souz          #+#    #+#             */
/*   Updated: 2023/12/08 17:54:03 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../examlib.h"

char    *ft_strrev(char *str)
{
        auto int start = 0;
        auto int end = 0;
        char    temp;

        while (str[end])
                end++;

        while (start < end)
        {
                temp = str[start];
                str[start++] = str[--end];
                str[end] = temp;
        }
        return (str);
}

int     main(int argc, char **argv)
{
        if(argc == 2)
                printf("%s\n", ft_strrev(argv[1]));
        return (0);
}