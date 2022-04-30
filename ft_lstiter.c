/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 15:49:51 by esmirnov          #+#    #+#             */
/*   Updated: 2021/12/20 15:49:53 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
/* 
* SYNOPSIS:
* 	Apply function to content of all list's elements
* DESCRIPTION:
*	Iterates the list lst and applies the function f to the content of
*	each element.
* PARAMETERS
*	#1 - Pointer to the element 
*	#2 - Fonction to be applied 
*/