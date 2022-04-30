/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <esmirnov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:12:39 by esmirnov          #+#    #+#             */
/*   Updated: 2021/12/08 18:56:44 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;

	s1 = (unsigned char *)s;
	while (n--)
	{
		if (*s1 != (unsigned char)c)
			s1++;
		else
			return (s1);
	}
	return (NULL);
}

/*
* DESCRIPTION
*	Fonction scans the initial n bytes of the memory 
*	area pointed to by s for the first instance of c.  Both c and the
*	bytes of the memory area pointed to by s are interpreted as
*	unsigned char.
* RETURN
* a pointer to the matching byte or 
* NULL if the character does not occur in the given memory area.
*/