/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:49:25 by hde-souz          #+#    #+#             */
/*   Updated: 2023/12/01 18:07:54 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../examlib.h"

void    repeat_alpha(char *str)
{
    while (*str != '\0')
    {
        int repeat;

        if (*str >= 97 && *str <= 122)
            repeat = *str - 97 + 1;
        else if (*str >= 65 && *str <= 90)
            repeat = *str - 65 + 1;
        else
            repeat = 1;
        while (repeat--)
            write(1, str, 1);
        str++;
    }
}

int main(int argc, char **argv)
{
    if(argc == 2)
        repeat_alpha(argv[1]); 
    write(1, "\n", 1);
    return (0);
}