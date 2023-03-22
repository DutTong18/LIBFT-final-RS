/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:24:36 by dphan             #+#    #+#             */
/*   Updated: 2023/03/22 18:31:31 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	dstlen;

	i = 0;
	dstlen = ft_strlen(dst);
	while (*dst != '\0')
	{
		dst++;
	}
	while (*src != '\0' && size > 1)
	{
		*dst++ = *src++;
		i++;
		size--;
	}
	if (size == 1 || *src == 0)
	{
		*dst = '\0';
	}
	return (dstlen + i);
}
