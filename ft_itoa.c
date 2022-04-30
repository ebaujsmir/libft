/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esmirnov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 10:51:52 by esmirnov          #+#    #+#             */
/*   Updated: 2021/12/17 11:33:47 by esmirnov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = (-n);
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			len;
	int long	temp_n;

	temp_n = n;
	len = ft_len(temp_n);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		temp_n *= -1;
	}
	if (n == 0)
		str[0] = '0';
	while (temp_n && len >= 0)
	{
		len--;
		str[len] = '0' + temp_n % 10;
		temp_n /= 10;
	}
	return (str);
}

/*
* DESCRIPTION
*	This function allocates memory and returns a 'fresh' string of characters
*	terminated with a '\0' that is the char equivalent of the int passed in
*	the parameter. Negative numbers should be managed as well. If the allocation
*	fails the function will return NULL.
*	count number of digits to define the length of the string 
*/