/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:45:44 by hde-souz          #+#    #+#             */
/*   Updated: 2023/12/04 19:09:16 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../examlib.h"

void    camel_to_snake(char *str)
{
        while(*str)
        {
                if(*str >= 'A' && *str <= 'Z')
                {
                        write(1, "_", 1);
                        *str += 32;
                }
                write(1, str++, 1);
        }
}

int     main(int argc, char **argv)
{
        if (argc == 2)
                camel_to_snake(argv[1]);
        write(1, "\n", 1);
        return (0);
}