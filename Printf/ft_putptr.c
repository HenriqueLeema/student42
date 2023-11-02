/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:51:24 by hde-souz          #+#    #+#             */
/*   Updated: 2023/11/01 21:42:55 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*hex_to_str(unsigned long n, const char *hex_digits)
{
	size_t			size;
	unsigned long	temp;
	char			*hex;

	temp = n;
	size = 0;
	if (n == 0)
		size = 1;
	while (temp > 0)
	{
		temp /= 16;
		size++;
	}
	hex = (char *)malloc(sizeof(char) * (size + 3));
	if (!hex)
		return (NULL);
	hex[size + 2] = '\0';
	while (size > 0)
	{
		hex[--size + 2] = hex_digits[n % 16];
		n /= 16;
	}
	hex[0] = '0';
	hex[1] = 'x';
	return (hex);
}

int	ft_putptr(void *nbr)
{
	const char			*hex_digits;
	char				*str;
	int					len;
	unsigned long		n;

	if (nbr == NULL)
		return (ft_putstr("(nil)"));
	hex_digits = "0123456789abcdef";
	n = (unsigned long)nbr;
	str = hex_to_str(n, hex_digits);
	if (!str)
		return (-1);
	len = ft_putstr(str);
	free(str);
	return (len);
}
