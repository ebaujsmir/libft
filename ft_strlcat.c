/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:38:25 by esmirnov          #+#    #+#             */
/*   Updated: 2021/12/17 15:46:34 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	i = 0;
	if (dstlen >= size)
		return (size + srclen);
	while (src[i] != '\0' && dstlen + i < size - 1)
	{	
		dst[dstlen + i] = src [i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
