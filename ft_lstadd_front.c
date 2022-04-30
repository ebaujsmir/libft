/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <esmirnov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 11:45:02 by esmirnov          #+#    #+#             */
/*   Updated: 2021/12/20 11:54:13 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (alst == NULL)
		*alst = new;
	else
	{
		new->next = *alst;
		*alst = new;
	}
}

/*
* DESCRIPTION:
*	Adds the element ’new’ at the beginning of the list.
*/