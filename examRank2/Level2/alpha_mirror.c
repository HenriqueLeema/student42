/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:45:40 by hde-souz          #+#    #+#             */
/*   Updated: 2023/12/04 18:49:26 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../examlib.h"

void    alpha_mirror(char *str)
{
        auto int i = 0;
	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
                {
			str[i] = 'Z' - str[i] + 'A';
                }
		else if (str[i] >= 'a' && str[i] <= 'z')
                {
			str[i] = 'z' - str[i] + 'z';
                }
		write(1, &str[i++], 1);
        }
}

int     main(int argc, char **argv)
{
        if (argc == 2)
        {
                alpha_mirror(argv[1]);
        }
        write(1, "\n", 1);
        return (0);
}