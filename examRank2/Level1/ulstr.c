/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:45:29 by hde-souz          #+#    #+#             */
/*   Updated: 2023/12/01 21:06:52 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../examlib.h"

void    ulstr(char *str)
{
        auto int i = 0;
        while(str[i])
        {
                if (str[i] >= 65 && str[i] <= 90) // upper
                        str[i] += 32;
                else if (str[i] >= 97 && str[i] <= 122) // lower
                        str[i] -= 32;
                write(1, &str[i++], 1);        
        }  
}

int main(int argc, char **argv)
{
    if(argc == 2)
        ulstr(argv[1]); 
    write(1, "\n", 1);
    return (0);
}