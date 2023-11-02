/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:51:03 by hde-souz          #+#    #+#             */
/*   Updated: 2023/11/02 21:10:19 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	int	count;

	count = 0;
	if (nbr == INT_MIN)
		count += ft_putstr("-2147483648");
	else if (nbr < 0)
	{
		ft_putchar('-');
		count++;
		count += ft_putnbr(-nbr);
	}
	else if (nbr >= 10) 
	{
		count += ft_putnbr(nbr / 10);
		count += ft_putnbr(nbr % 10);
	}
	else
	{
		ft_putchar(nbr + '0');
		count++;
	}
	return (count);
}
