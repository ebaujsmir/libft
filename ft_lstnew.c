/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 11:23:09 by esmirnov          #+#    #+#             */
/*   Updated: 2021/12/20 11:38:04 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = malloc(sizeof(t_list));
	if (element == NULL)
		return (NULL);
	element->content = content;
	element->next = NULL;
	return (element);
}

/*
* DESCRIPTION:
*	Allocates (with malloc(3)) and returns a new element. The variable
*	’content’ is initialized with the value of the parameter ’content’. 
*	The variable ’next’ is initialized to NULL.
*/
