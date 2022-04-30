/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 18:28:01 by esmirnov          #+#    #+#             */
/*   Updated: 2022/04/28 18:28:22 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			while (head)
			{
				new = head->next;
				(*del)(head->content);
				free(head);
				head = new;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&head, new);
		lst = lst->next;
	}
	return (head);
}

// /*
// * DESCRIPTION:
// * iterates a list lst and applies the function f to each link to create
// * a “fresh” list (using malloc(3)) resulting from the successive 
// * applications of f. If the allocation fails, the function returns NULL 
// */