/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <esmirnov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:56:44 by esmirnov          #+#    #+#             */
/*   Updated: 2021/12/13 14:52:50 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_chr_in_set(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_chr_in_set(set, s1[i]))
		i++;
	j = ft_strlen(s1) - 1;
	while (j > i && ft_chr_in_set(set, s1[j]))
		j--;
	str = malloc(sizeof(char) * (j - i) + 2);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, &s1[i], (j - i + 2));
	return (str);
}

/*
* DESCRIPTION
*	Allocates (with malloc(3)) and returns a copy of s1 with the
* 	characters specified in ’set’ removed from the beginning and 
*	the end of the string.
* PARAMETRES
* 	#1 - string to trim
* 	#2 - set of charcters to trim
* RETURN
*	copy of the string given as argument without set's characteres 
*	at the beginning or at the end of the string.
*	NULL If the allocation fails. 
*/