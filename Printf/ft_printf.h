/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 19:04:04 by hde-souz          #+#    #+#             */
/*   Updated: 2023/10/30 20:07:42 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "ft_printf.h"

char	*ft_strchr(const char *s, int c);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putptr(void *nbr);
int		ft_putnbr(int nbr);
int		ft_putunbr(unsigned int nbr);
int		ft_puthex(unsigned int nbr, int is_uppercase);
int		ft_printf(const char *format, ...);
int		ft_check(const char *fmt, int i, va_list ap);

#endif
