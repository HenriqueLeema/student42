/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 19:43:57 by hde-souz          #+#    #+#             */
/*   Updated: 2023/12/01 21:20:09 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../examlib.h"

void    fizzbuzz()
{
    auto int i = 0;
    char str[10] = "0123456789";

    while (i <= 100)
    {
        if (i % 15 == 0)
            write(1, "fizzbuzz", 8);
        else if (i % 3 == 0)
            write(1, "fizz", 4);
        else if (i % 5 == 0)
            write(1, "buzz", 4);
        else
        {
            if (i > 9)
                write(1, &str[i / 10], 1);
            write(1, &str[i % 10], 1);
        }
        i++;
        write(1, "\n", 1);
    }
}

int main(void)
{
    fizzbuzz();
    return (0);
}