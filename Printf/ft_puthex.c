/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:51:53 by hde-souz          #+#    #+#             */
/*   Updated: 2023/10/31 21:49:59 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int nbr, int is_uppercase)
{
	int	count;

	count = 0;
	if (nbr >= 16)
	{
		count += ft_puthex(nbr / 16, is_uppercase);
		count += ft_puthex(nbr % 16, is_uppercase);
	}
	else
	{
		if (nbr < 10)
			count += ft_putchar(nbr + '0');
		else if (is_uppercase)
			count += ft_putchar('A' + (nbr - 10));
		else
			count += ft_putchar('a' + (nbr - 10));
	}
	return (count);
}
