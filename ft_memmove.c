/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <esmirnov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:03:23 by esmirnov          #+#    #+#             */
/*   Updated: 2021/12/17 15:24:27 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*destcpy;
	const char	*srccpy;

	destcpy = dest;
	srccpy = src;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (n--)
			destcpy[n] = srccpy[n];
	}
	else
		ft_memcpy(destcpy, srccpy, n);
	return (dest);
}

/*
* DESCRIPTION
*	copy byte string
*/