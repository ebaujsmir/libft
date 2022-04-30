/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <esmirnov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:06:01 by esmirnov          #+#    #+#             */
/*   Updated: 2021/12/21 14:28:15 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// count nbr of words in the initial string
static int	ft_word_count(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			word++;
		if (i > 0 && s[i] != c && s[i - 1] == c)
			word++;
		i++;
	}
	return (word);
}

static void	*ft_tab_free(char **tab, int word_num)
{
	int	i;

	i = 0;
	while (i < word_num)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

// memory allocation for tab
static char	**ft_memory_allocation(char **tab, char const*s, char c, int size)
{
	int	i;
	int	start;
	int	count;

	i = 0;
	start = 0;
	count = 0;
	while (s[start] != '\0' && i < size)
	{
		while (s[start] == c)
			start++;
		while (s[start] != c && s[start] != '\0')
		{
			start++;
			count++;
		}
		tab[i] = malloc(sizeof(char) * count + 1);
		if (tab[i] == NULL)
			return (ft_tab_free(tab, i));
		ft_strlcpy(tab[i], &s[start - count], count + 1);
		count = 0;
		i++;
	}
	tab[i] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		str_nbr;
	char	**tab;

	if (!s)
		return (NULL);
	str_nbr = ft_word_count(s, c);
	tab = malloc(sizeof(char *) * (str_nbr + 1));
	if (tab == NULL)
		return (NULL);
	tab[str_nbr] = NULL;
	tab = ft_memory_allocation(tab, s, c, str_nbr);
	return (tab);
}

/*
* DESCRIPTION
*	allocates (with malloc(3)) and returns an array of “fresh” strings 
*	(all ending with ’\0’, including the array itself) 
*	obtained by spliting s using the character c as a delimiter. 
*	If the allocation fails the function returns NULL. 
*	Example: ft_strsplit(" hello fellow students ", ’ ’) 
*	returns the array ["hello", "fellow", "students"]
*/
