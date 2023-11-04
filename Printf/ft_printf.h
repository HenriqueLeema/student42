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
# include "ft_printf.h"

# define DCML "0123456789"
# define HEXL "0123456789abcdef"
# define HEXU "0123456789ABCDEF"
# define FRMT "cspdiuxX%"

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putptr(size_t ptr, const char *base);
int		ft_basenbr(size_t n, const char *base);
int		ft_printf(const char *fmt, ...);
char	*ft_strchr(const char *s, int c);

#endif
