/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <esmirnov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:42:57 by esmirnov          #+#    #+#             */
/*   Updated: 2021/12/08 18:47:11 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int
	cmp_char(char c1, char c2)
{
	if ((unsigned char)c1 != (unsigned char)c2)
		return ((unsigned char)c1 - (unsigned char)c2);
	return (0);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (cmp_char(s1[i], s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (cmp_char(s1[i], s2[i]));
	return (0);
}

// {
// 	size_t	i;

// 	i = 0;
// 	while ((s1[i] != '\0') || (s2[i] != '\0'))
// 	{
// 		if (i < n && (s1[i] != s2[i]))
// 			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
// 		i++;
// 	}
// 	return (0);
// }

/*
* DESCRIPTION strcmp
*	function strcmp compares the two strings s1 and s2.  
*	The locale is not taken into account 
* 	The comparison is done using unsigned characters.
* RETURN VALUE 
*	returns an integer indicating the result of the comparison, as follows:
*	• 0, if the s1 and s2 are equal;
*	• a negative value if s1 is less than s2;
*	• a positive value if s1 is greater than s2.
* FONCTION strncmp 
The strncmp() function is similar, except it compares only the
* 	first (at most) n bytes of s1 and s2.
* 	The strcmp() and strncmp() functions return an integer less than,
*	equal to, or greater than zero if s1 (or the first n bytes
*	thereof) is found, respectively, to be less than, to match, or be
*	greater than s2 
*/