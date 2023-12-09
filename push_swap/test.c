/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:14:24 by hde-souz          #+#    #+#             */
/*   Updated: 2023/12/09 19:17:32 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(void)
{
    ft_printf("Oioi");
    return (0);
}

/*

Declare pointers to two linked lists, stack A and B
    Set both pointers to NULL to avoid undefined behaviour and indicate
    we are starting with empty stacks

Handle input count errors. Argc must be >= 2, argv[1] must not be empty
    Return error if input is error

Handle both cases of input: variable number of command line args, or string
    If string, we split() into substrings


Initialize stack A by appending each input number as a node to stack A
    Handle int overflow, duplicates, syntax error (e.g. only digits and +/-)
        If error found, free stack A and return error
    Check each input, if it is a long integer
        If string, convert into long integer
    Apend the nodes to stack A


Check if stack A is sorted
    If not sorted, implement sorting algorithm
        If 2 numbers, swap the numbers
        If 3 numbers, implement `sort three`
        If more than 3 numbers, call our Turk Algorithm!!!

*/