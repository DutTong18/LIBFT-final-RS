/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtong <dtong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:49:00 by dtong             #+#    #+#             */
/*   Updated: 2023/08/12 20:53:10 by dtong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*source;

	dest = (char *)dst;
	source = (char *)src;
	if (!dst && !src)
		return (0);
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
