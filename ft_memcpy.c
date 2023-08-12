/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtong <dtong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:49:08 by dtong             #+#    #+#             */
/*   Updated: 2023/08/12 20:53:09 by dtong            ###   ########.fr       */
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
