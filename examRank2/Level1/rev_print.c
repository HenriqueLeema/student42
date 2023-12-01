/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:45:14 by hde-souz          #+#    #+#             */
/*   Updated: 2023/12/01 18:51:04 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../examlib.h"

void    rev_print(char *str)
{
        auto int i = 0;
        while (str[i] != '\0')
                i++;
        while (i--)
                write(1, &str[i], 1);
}

int main(int argc, char **argv)
{
        if (argc == 2)
                rev_print(argv[1]);
        write(1, "\n", 1); 
        return (0);
}