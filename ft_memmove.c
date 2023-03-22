/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:42:42 by dphan             #+#    #+#             */
/*   Updated: 2023/03/22 17:44:07 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*source;

	dest = (char *)dst;
	source = (char *)src;
	if ((source < dest) && (dest < source + len))
	{
		while (len > 0)
		{
			len--;
			*(dest + len) = *(source + len);
		}
	}
	else
	{
		while (len > 0)
		{
			*dest++ = *source++;
			len--;
		}
	}
	return (dst);
}
