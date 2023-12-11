/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-souz <hde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:45:52 by hde-souz          #+#    #+#             */
/*   Updated: 2023/10/27 18:55:18 by hde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = new;
}
/*
#include <stdint.h>
int main() {
    t_list *head = NULL;
    int userInput;

    do {
        printf("Linked List: ");
        t_list *current = head;
        while (current != NULL) {
            printf("%d ", (int)(intptr_t)current->content);
            current = current->next;
        }
        printf("\n");
        printf("Enter a number (0 to exit): ");
        scanf("%d", &userInput);

        if (userInput != 0) {
            t_list *newNode = malloc(sizeof(t_list));
            if (!newNode) {
                return 1;
            }
            newNode->content = (void *)(intptr_t)userInput;
            newNode->next = NULL;
            ft_lstadd_back(&head, newNode);
        }

    } while (userInput != 0);
    t_list *current = head;
    while (current != NULL) {
        t_list *next = current->next;
        free(current);
        current = next;
    }
    return 0;
}
*/