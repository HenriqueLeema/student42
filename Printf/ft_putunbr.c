/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:51:13 by hde-souz          #+#    #+#             */
/*   Updated: 2023/11/02 19:58:54 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int nbr)
{
	int	count;

	count = 0;
	if (nbr >= 10)
	{
		count += ft_putunbr(nbr / 10);
		count += ft_putunbr(nbr % 10);
	}
	else
		count += ft_putchar(nbr + '0');
	return (count);
}
