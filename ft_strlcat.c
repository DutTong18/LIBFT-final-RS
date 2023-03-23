/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:24:36 by dphan             #+#    #+#             */
/*   Updated: 2023/03/23 11:10:39 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size == 0)
		return (srclen);
	if (size <= dstlen)
		return (srclen + size);
	while (*dst != '\0')
	{
		dst++;
	}
	while (*src != '\0' && (dstlen + i) < size - 1)
	{
		*dst++ = *src++;
		i++;
	}
	*dst = '\0';
	return (dstlen + srclen);
}
