/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <esmirnov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 11:55:58 by esmirnov          #+#    #+#             */
/*   Updated: 2021/12/20 12:46:16 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	lst_size;

	lst_size = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		lst_size++;
	}
	return (lst_size);
}

/*
* DESCRIPTION:
*	Counts the number of elements in a list.
*/