/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:44:29 by hde-souz          #+#    #+#             */
/*   Updated: 2023/10/25 21:38:15 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*mynode;

	mynode = malloc(sizeof(t_list));
	if (mynode == NULL)
		return (NULL);
	mynode->content = content;
	mynode->next = NULL;
	return (mynode);
}
