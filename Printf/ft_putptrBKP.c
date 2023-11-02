/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:51:24 by hde-souz          #+#    #+#             */
/*   Updated: 2023/11/01 21:07:22 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#define HEX_DIGITS "0123456789abcdef"

int	calculate_hex_string(void *nbr, char *hex_string)
{
	uintptr_t	hex_value;
	uintptr_t	temp_value;
	int			actual_length;
	int			i;

	hex_value = (uintptr_t)nbr;
	actual_length = 0;
	hex_string[0] = '0';
	hex_string[1] = 'x';
	temp_value = hex_value;
	while (temp_value != 0)
	{
		temp_value >>= 4;
		actual_length++;
	}
	i = actual_length + 1;
	while (i >= 2) 
	{
		hex_string[i] = HEX_DIGITS[hex_value & 0xf];
		hex_value >>= 4;
		i--;
	}
	hex_string[actual_length + 2] = '\0';
	return (actual_length + 2);
}

int	ft_putptr(void *nbr)
{
	char	hex_string[sizeof(uintptr_t) * 2 + 3];
	int		length;
	int		count;

	length = calculate_hex_string(nbr, hex_string);
	count = 0;
	while (count < length) 
	{
		ft_putchar(hex_string[count]);
		count++;
	}
	return (count);
}
