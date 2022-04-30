/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 11:36:04 by esmirnov          #+#    #+#             */
/*   Updated: 2021/12/17 11:49:55 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*str;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
* DESCRIPTION
*	This function applies the given function f to each character of the given
*	string in order to create a new string with malloc and we also pass to f 
*	the specific index of our character in the given stringthat is the result 
*	of have function
*	f run on string s. 
* RETURN
*	It will return a 'fresh' copy of the modified string.
*	NULL if str ko
*/