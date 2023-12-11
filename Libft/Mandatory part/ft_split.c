/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 21:31:59 by hde-souz          #+#    #+#             */
/*   Updated: 2023/10/27 15:31:30 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static void	ft_free_word_list(char **s_list, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free(s_list[i]);
		i++;
	}
	free(s_list);
}

static size_t	ft_word_count(char const *s, char c)
{
	size_t	count;
	int		match;

	count = 0;
	match = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (match == 0)
			{
				match = 1;
				count++;
			}
		}
		else
			match = 0;
		s++;
	}
	return (count);
}

static char	**ft_word_split(char **s_list, char const *s, char c, size_t size)
{
	size_t	i;
	size_t	word_len;

	i = 0;
	while (i < size)
	{
		while (*s == c)
			s++;
		word_len = ft_word_len(s, c);
		s_list[i] = malloc(sizeof(char) * (word_len + 1));
		if (s_list[i] == NULL)
		{
			ft_free_word_list(s_list, i);
			return (NULL);
		}
		ft_strlcpy(s_list[i], s, word_len + 1);
		s += word_len;
		i++;
	}
	s_list[i] = NULL;
	return (s_list);
}

char	**ft_split(char const *s, char c)
{
	size_t	size;
	char	**s_list;

	if (s == NULL)
		return (NULL);
	size = ft_word_count(s, c);
	s_list = (char **)malloc(sizeof(char *) * (size + 1));
	if (s_list == NULL)
		return (NULL);
	return (ft_word_split(s_list, s, c, size));
}
