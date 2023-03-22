/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:43:02 by dphan             #+#    #+#             */
/*   Updated: 2023/03/22 17:32:26 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dst;
	char	*source;

	dst = (char *)dest;
	source = (char *)src;
	if (!dest && !src)
	{
		return (0);
	}
	while (n > 0)
	{
		*dst++ = *source++;
		n--;
	}
	return (dest);
}
