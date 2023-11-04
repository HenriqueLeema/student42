/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handlef.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:51:03 by hde-souz          #+#    #+#             */
/*   Updated: 2023/11/03 23:58:11 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_basenbr(int fd, size_t n, const char *base)
{
	auto size_t base_len = 0;
	auto int count = 0;
	while (base[base_len])
		base_len++;
	if (n == 0)
		return (write(fd, &base[0], 1));
	if (base_len == 1)
		return (write(fd, &base[0], 1));
	if (base_len != 16) 
	{
		if ((ssize_t)n < 0) 
		{
			count += write(fd, "-", 1);
			n = -n;
		}
	}
	if (n >= base_len)
		count += ft_basenbr(fd, n / base_len, base);
	count += write(fd, &base[n % base_len], 1);
	return (count);
}

int	ft_putptr(size_t ptr, const char *base)
{
	int	count;

	if (!ptr)
		return (write(1, "(nil)", 5));
	count = write(1, "0x", 2);
	count += ft_basenbr(1, ptr, base);
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

int	ft_putchar(char c)
{
	return (write (1, &c, 1));
}
