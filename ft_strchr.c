/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:32:58 by esmirnov          #+#    #+#             */
/*   Updated: 2021/12/08 12:43:17 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((*s != '\0') && (*s != (char)c))
	{
		s++;
	}
	if (*s == (char)c)
	{
		return ((char *)s);
	}
	return (NULL);
}

/*
* DESCRIPTION
*	The strchr() function locates the first occurrence of c (converted to a
*	char) in the string pointed to by s.  The terminating null character is
*	considered to be part of the string; therefore if c is \0, 
*	the functions locate the terminating \0.
* RETURN
*	The functions strchr() and strrchr() return a pointer to the located
*	character, or NULL if the character does not appear in the string.
*/