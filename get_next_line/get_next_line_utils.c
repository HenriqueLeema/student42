/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:18:19 by hde-souz          #+#    #+#             */
/*   Updated: 2023/11/20 23:46:26 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
THIS IS A PLACEHOLDER FILE THAT WILL BE USED FOR EXPLAINING AND BRAINSTORMING

ok so I am having a dinamic variation on what is being written on the buffer 
but the buffer always keep the previous data on it which  means it would 
concatenate the further reads into it, which results in the possibility of 
reading line by line, hence the name get_next_line

in other words, the static buffer allows me to concatenate multiple reads

by having a bidimensional array of chars, I can handle multiple fds as well

get_next_line might be a misleading name, fuck it

PRACTICAL EXAMPLE OF STATIC FUNCTIONALITY

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
}
*/