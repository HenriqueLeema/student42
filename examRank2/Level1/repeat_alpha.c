/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:45:09 by hde-souz          #+#    #+#             */
/*   Updated: 2023/12/01 11:19:15 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../examlib.h"

void repeat_alpha(char *str)
{
    while (*str != '\0')
    {
        if(condition)
        {

        }
        else
            write(1, str, 1);
        ++str;
    }

}

int main(int argc, char **argv)
{
    if(argc == 2)
        repeat_alpha(argv[1]);
    write(1, "\n", 1);
    return (0);
}

