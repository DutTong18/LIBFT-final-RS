/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:43:16 by dphan             #+#    #+#             */
/*   Updated: 2023/03/23 13:37:04 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*string;

	string = (char *)str;
	while (*string && n > 0)
	{
		if (*string == c)
		{
			return ((char *)string);
		}
		string++;
		n--;
	}
	return (0);
}
