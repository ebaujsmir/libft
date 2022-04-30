/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 11:06:30 by esmirnov          #+#    #+#             */
/*   Updated: 2021/12/08 12:04:54 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)

{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && (i + j) < len)
		{
			j++;
			if (!needle[j])
				return ((char *) &haystack[i]);
		}
		i++;
	}
	return (0);
}
/* DESCRIPTION
* 	locates the first occurrence of the null-terminated string needle
*	in the string haystack, where not more than len characters are searched.
*	Characters that appear after a `\0' character are not searched.
*	Since the Fn strnstr function is a FreeBSD specific API,
*	it should only be used when portability is not a concern.
*RETURN
*	If needle is an empty string, haystack is returned,
*	if needled occurs nowhere in haystack, NULL is returned
*	otherwise
*	a pointer to the first caractere of the first occurence of needle
*	is returned
*/