/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:56:34 by esmirnov          #+#    #+#             */
/*   Updated: 2021/12/17 15:47:28 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}

/*
* DESCRIPTION
*	function copies up to size - 1 characters 
*	from the NUL-terminated string src to dst, NUL-terminating the result
*	dst - Where to copy the string to
*	src - Where to copy the string from
*	dstsize - size of destination buffer
* RETURN
*	return the total length of the string they tried to create: means the 
*	length of src // the result is always a valid NUL-terminated string 
*	that fits in the buffer (unless, 
*	of course, the buffer size is zero). 
*	It does not pad out the result like strncpy does.
*/