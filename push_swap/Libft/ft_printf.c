/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 18:33:46 by hde-souz          #+#    #+#             */
/*   Updated: 2023/12/09 16:59:05 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

int	ft_basenbr(size_t n, const char *base, int is_pointer)
{
	auto size_t base_len = 0;
	auto int count = 0;
	while (base[base_len])
		base_len++;
	if (is_pointer) 
	{
		if (n == 0) 
			return (write(1, "(nil)", 5));
		count += write(1, "0x", 2);
	}
	if (base_len == 10 && (ssize_t)n < 0)
	{
		count += write(1, "-", 1);
		n = -n;
	}
	if (n >= base_len)
		count += ft_basenbr(n / base_len, base, 0);
	count += write(1, &base[n % base_len], 1);
	return (count);
}

int	ft_parsef(char fmt, va_list ap)
{
	if (fmt == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (fmt == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (fmt == 'd' || fmt == 'i')
		return (ft_basenbr(va_arg(ap, int), DCML, 0));
	else if (fmt == 'x')
		return (ft_basenbr(va_arg(ap, unsigned int), HEXL, 0));
	else if (fmt == 'X')
		return (ft_basenbr(va_arg(ap, unsigned int), HEXU, 0));
	else if (fmt == 'u')
		return (ft_basenbr(va_arg(ap, unsigned int), DCML, 0));
	else if (fmt == 'p')
		return (ft_basenbr(va_arg(ap, size_t), HEXL, 1));
	else
		return (write(1, &fmt, 1));
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;

	auto int ret = 0;
	auto int i = 0;
	va_start(ap, fmt);
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			ret += ft_parsef(fmt[i + 1], ap);
			i += 2;
		}
		else
			ret += ft_putchar(fmt[i++]);
	}
	va_end(ap);
	return (ret);
}

/*
#include <stdio.h>
#include <termios.h>
#include <stdlib.h>
int main(void)//input version
{

    char c = 'H';
    char *s = "testString";
    int n = -1;
    unsigned int u = 12345;
    void *p = &n;
    char format;


    // Save terminal settings
    struct termios old_settings, new_settings;
    tcgetattr(STDIN_FILENO, &old_settings);
    new_settings = old_settings;
    new_settings.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &new_settings);
    system("clear");
    while (1)
    {
        printf("Specify a format or press q to quit: \nc s p d i u x X %%\n\n");
        format = getchar();
        if (format == 'q')
        {
            system("clear");
            break;
        }
        switch (format)
        {
            case 'c':
                system("clear");
printf("- %d chars - printf\n", printf("Char: %c ", c));
printf("- %d chars - ft_printf\n\n", ft_printf("Char: %c ", c));
                break;
            case 's':
                system("clear");
printf("- %d chars - printf\n", printf("String: %s ", s));
printf("- %d chars - ft_printf\n\n", ft_printf("String: %s ", s));
                break;
            case 'p':
                system("clear");
printf("- %d chars - printf\n", printf("Pointer: %p ", p));
printf("- %d chars - ft_printf\n\n", ft_printf("Pointer: %p ", p));
                break;
            case 'd':
                system("clear");
printf("- %d chars - printf\n", printf("Decimal: %d ", n));
printf("- %d chars - ft_printf\n\n", ft_printf("Decimal: %d ", n));
                break;
            case 'i':
                system("clear");
printf("- %d chars - printf\n", printf("Integer: %d ", n));
printf("- %d chars - ft_printf\n\n", ft_printf("Integer: %d ", n));
                break;
            case 'u':
                system("clear");
printf("- %d chars - printf\n", printf("Unsigned decimal: %u ", u));
printf("- %d chars - ft_printf\n\n", ft_printf("Unsigned decimal: %u ", u));
                break;
            case 'x':
                system("clear");
printf("- %d chars - printf\n", printf("Hex lowercase: %x ", n));
printf("- %d chars - ft_printf\n\n", ft_printf("Hex lowercase: %x ", n));
                break;
            case 'X':
                system("clear");
printf("- %d chars - printf\n", printf("Hex uppercase: %X ", n));
printf("- %d chars - ft_printf\n\n", ft_printf("Hex uppercase: %X ", n));
                break;
            case '%':
                system("clear");
printf(" - %d char - printf\n", printf("%%"));
printf(" - %d char - ft_printf\n\n", ft_printf("%%"));
                break;
            default:
                system("clear");
                printf("Invalid key!\n\n\n");
                break;
        }
    }
    tcsetattr(STDIN_FILENO, TCSANOW, &old_settings);
    return (0);
}*/