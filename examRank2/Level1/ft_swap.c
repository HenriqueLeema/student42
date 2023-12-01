/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 19:44:59 by hde-souz          #+#    #+#             */
/*   Updated: 2023/11/30 23:28:27 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../examlib.h"

void	ft_swap(int *a, int *b)
{
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
}

// only a function is required

int main(int argc, char **argv)
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    if (argc == 3)
    {
        printf("Before swap: %i and %i\n", a, b);
        ft_swap(&a, &b);
        printf("After swap: %i and %i\n", a, b);
        return (0);
    }
    else
        printf("Invalid argument count\nTry: ./a.out argument1 argument2\n");
    return (0);
}