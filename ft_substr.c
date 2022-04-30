/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 12:54:32 by esmirnov          #+#    #+#             */
/*   Updated: 2021/12/17 18:22:05 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		str = malloc(sizeof(char) * 1);
		if (str == NULL)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	if (len > ft_strlen(&s[start]))
		str = malloc(sizeof(char) * (ft_strlen(&s[start]) + 1));
	else
		str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (len-- != 0 && s[start] != '\0')
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

/*
* DESCRIPTION
* 	Aloocate (with malloc) and returns a substring from the string s. 
* 	The substring begins at index start and is of maximum size len. 
* PARAMETERS
* 	#1. String to extract the substring.
* 	#2. Index of substring begin.
* 	#3. Maximum size of the new string.
* RETURN
* 	New string.
* 	NULL If the allocation fails.
*/