/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 19:09:59 by hde-souz          #+#    #+#             */
/*   Updated: 2023/12/01 21:14:19 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../examlib.h"

void    first_word(char *str)
{
    auto int i = 0;
    while (str[i] && str[i] <= 32)
            i++;
        while (str[i] > 32)
            write(1, &str[i++], 1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
        first_word(argv[1]);
    write(1, "\n", 1);
    return (0);
}