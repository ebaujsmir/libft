/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <esmirnov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 12:53:46 by esmirnov          #+#    #+#             */
/*   Updated: 2021/12/20 13:05:59 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!del)
		return ;
	if (lst != NULL)
	{
		(*del)(lst->content);
		free(lst);
	}
}

/* 
* DESCRIPTION:
* 	Takes as a parameter a link’s pointer (element) address and frees the memory
* 	of the link’s content using the function del given as a parameter,
* 	then frees the link’s memory using free(3). The memory of next
* 	must not be freed under any circumstance.
* PARAMETERS 	
*	#1 - element to be free 
* 	#2 - fonction del adress to delete the element content 
*/