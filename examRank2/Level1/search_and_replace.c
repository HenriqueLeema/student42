/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:45:25 by hde-souz          #+#    #+#             */
/*   Updated: 2023/12/01 20:58:51 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../examlib.h"

void    search_and_replace(char *str, char old, char new)
{
        auto int i = 0;
        while (str[i])
        {
                if(str[i] != old)
                        write(1, &str[i], 1);
                else
                        write(1, &new, 1);
                i++;
        }
}

int main(int argc, char **argv)
{
        if (argc == 4)
                search_and_replace(argv[1], argv[2][0], argv[3][0]); 
        write(1, "\n", 1);
        return (0);
}
