/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 19:43:57 by hde-souz          #+#    #+#             */
/*   Updated: 2023/11/30 23:35:37 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../examlib.h"

/*FIZZBUZZ*/ int fizzbuzz();

void putnbr(int n)
{
    char str[10] = "0123456789";

    if (n > 9)
        putnbr(n / 10);
    write(1, &str[n % 10], 1);
}

int main(void)
{
    auto int i = 0;

    while (i <= 100)
    {
        if (i % 15 == 0)
            write(1, "fizzbuzz", 8);
        else if (i % 3 == 0)
            write(1, "fizz", 4);
        else if (i % 5 == 0)
            write(1, "buzz", 4);
        else
            putnbr(i);
        i++;
        write(1, "\n", 1);
    }
}