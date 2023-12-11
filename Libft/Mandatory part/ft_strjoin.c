/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:31:35 by hde-souz          #+#    #+#             */
/*   Updated: 2023/10/19 23:33:00 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		total_size;
	char		*str3;
	int			i;
	int			j;

	total_size = ft_strlen(s1) + ft_strlen(s2) +1;
	str3 = malloc(total_size);
	i = 0;
	j = 0;
	if (str3 == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str3[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str3[i + j] = s2[j];
		j++;
	}
	str3[i + j] = '\0';
	return (str3);
}
