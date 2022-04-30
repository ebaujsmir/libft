/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <esmirnov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:50:18 by esmirnov          #+#    #+#             */
/*   Updated: 2021/12/06 16:56:07 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1cpy;
	unsigned char	*s2cpy;
	size_t			i;

	s1cpy = (unsigned char *)s1;
	s2cpy = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (n--)
	{
		if (s1cpy[i] != s2cpy[i])
			return (s1cpy[i] - s2cpy[i]);
		i++;
	}
	return (0);
}
/*
* DESCRIPTION
*	Function compares the first n bytes (each interpreted as unsigned char)
*	of the memory areas s1 and s2.
* RETURN
*	An integer less than, equal to, or greater than zero
*	if the first n bytes of s1 is found,
*		respectively, to be less than, to match, or be greater than the
*		first n bytes of s2.
* 	For a nonzero return value, the sign is determined by the sign of
*		the difference between the first pair of bytes (interpreted as
*		unsigned char) that differ in s1 and s2.
* 	If n is zero, the return value is zero.
*/