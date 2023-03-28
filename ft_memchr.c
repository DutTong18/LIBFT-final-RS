/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:43:16 by dphan             #+#    #+#             */
/*   Updated: 2023/03/28 12:43:05 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*string;
	unsigned char	*notfound;
	unsigned char	ch;

	string = (unsigned char *)str;
	ch = (unsigned char)c;
	notfound = 0;
	while (n > 0)
	{
		if (*string == ch)
		{
			return ((unsigned char *)string);
		}
		string++;
		n--;
	}
	return (notfound);
}
