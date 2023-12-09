/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:55:14 by hde-souz          #+#    #+#             */
/*   Updated: 2023/10/27 18:13:33 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	*pos;
	size_t	tot_size;
	int		fill_byte;

	tot_size = nmemb * size;
	fill_byte = 0;
	pos = malloc(tot_size);
	if (!pos || (tot_size > INT_MAX))
		return (NULL);
	ft_memset(pos, fill_byte, tot_size);
	return ((void *)pos);
}
