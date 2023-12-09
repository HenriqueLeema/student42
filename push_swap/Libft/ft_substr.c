/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 23:15:45 by hde-souz          #+#    #+#             */
/*   Updated: 2023/10/18 23:15:45 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char const	*base_string;
	char		*new_string;
	size_t		max_length;
	size_t		i;

	base_string = s;
	max_length = 0;
	i = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	while (s[start + max_length] && max_length < len)
	{
		max_length++;
	}
	new_string = malloc(max_length + 1);
	if (new_string == NULL)
		return (NULL);
	i = 0;
	while (i < max_length)
	{
		new_string[i] = base_string[start + i];
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}
