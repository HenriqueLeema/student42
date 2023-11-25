/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:18:19 by hde-souz          #+#    #+#             */
/*   Updated: 2023/11/25 17:00:33 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

/*PRACTICAL EXAMPLE OF STATIC FUNCTIONALITY

int count_calls_static(void)
{
    static int count = 0;
    return ++count;
}

int count_calls_non_static(void)
{
    int count = 0;
    return ++count;
}

int main(void)
{
    // Using static variable with while loop
    int i = 0;
    while (i < 5)
    {
        printf("Static Call %d: %d\n", i + 1, count_calls_static());
        i++;
    }

    // Reset the counter
    i = 0;

    // Using non-static variable with while loop
    while (i < 5)
    {
        printf("Non-Static Call %d: %d\n", i + 1, count_calls_non_static());
        i++;
    }

    return 0;
}*/
