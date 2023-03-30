/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:20:48 by dphan             #+#    #+#             */
/*   Updated: 2023/03/28 15:50:07 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	get_length(int n)
{
	int i;

	i = 1;
	while (n /= 10)
	{
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int	len;
	int num;

	num = n;
	len = get_length(n);
	if (n < 0)
	{
		num *= -1;
		len++;
	}
	char	*str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	str[len] = '\0';
	while (len--)
	{
		str[len] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}