/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 18:33:46 by hde-souz          #+#    #+#             */
/*   Updated: 2023/11/03 00:11:11 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(const char *fmt, int i, va_list ap)
{
	if (fmt[i + 1] == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (fmt[i + 1] == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (fmt[i + 1] == 'p')
		return (ft_putptr(va_arg(ap, void *)));
	else if (fmt[i + 1] == 'd' || fmt[i + 1] == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	else if (fmt[i + 1] == 'u')
		return (ft_putunbr(va_arg(ap, unsigned int)));
	else if (fmt[i + 1] == 'x' || fmt[i + 1] == 'X')
		return (ft_puthex(va_arg(ap, unsigned int), fmt[i + 1] == 'X'));
	else if (fmt[i + 1] == '%')
		return (ft_putchar('%'));
	else
		return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		ret;

	i = 0;
	ret = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && ft_strchr("cspdiuxX%", format[i + 1]))
		{
			ret += ft_check(format, i, ap);
			i += 2;
		}
		else
		{
			ret += ft_putchar(format[i]);
			i++;
		}
	}
	va_end(ap);
	return (ret);
}
/*
int main(void)//input version
{
    char c = 'H';
    char *s = "testString";
    int n = -8;
    unsigned int u = 12345;
    void *p = &n;
    char format;

    #include <termios.h>
    // Save the terminal settings
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
}
*/