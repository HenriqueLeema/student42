/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlef.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:51:03 by hde-souz          #+#    #+#             */
/*   Updated: 2023/11/04 00:39:24 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write (1, &c, 1));
}

int	ft_putstr(char *str)
{
	auto int i = 0;
	if (str == NULL)
	{
		return (write(1, "(null)", 6));
	}
	while (str[i] != '\0')
		ft_putchar(str[i++]);
	return (i);
}

int	ft_putptr(size_t ptr, const char *base)
{
	int	count;

	if (!ptr)
		return (write(1, "(nil)", 5));
	count = write(1, "0x", 2);
	count += ft_basenbr(ptr, base);
	return (count);
}

int	ft_basenbr(size_t n, const char *base)
{
	auto size_t base_len = 0;
	auto int count = 0;
	while (base[base_len])
		base_len++;
	if (n == 0)
		return (write(1, &base[0], 1));
	if (base_len == 1)
		return (write(1, &base[0], 1));
	if (base_len != 16) 
	{
		if ((ssize_t)n < 0) 
		{
			count += write(1, "-", 1);
			n = -n;
		}
	}
	if (n >= base_len)
		count += ft_basenbr(n / base_len, base);
	count += write(1, &base[n % base_len], 1);
	return (count);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
