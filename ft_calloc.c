/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 12:45:52 by esmirnov          #+#    #+#             */
/*   Updated: 2022/04/28 18:15:10 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb && size > (size_t) - 1 / size)
		return (NULL);
	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	ptr = (void *)malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/*
* DESCRIPTION
*	Allocates enough space for count objects that are size bytes of memory each,
*	and returns a pointer to the allocated memory.
*	The allocated memory is filled with bytes of value zero.
* PARAMETERS
*	nmemb - Number of elements to be allocated
*	size of elements
* RETURN
*	A pointer to the allocated memory, or 
*	NULL if the request fails.
*/
