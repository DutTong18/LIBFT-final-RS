/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:36:37 by dphan             #+#    #+#             */
/*   Updated: 2023/03/28 11:18:04 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = ft_strlen(src);
	if (size == 0)
		return (j);
	while (src[i] != '\0' && (i < (size - 1)))
	{
		if (size > 0)
		{
			dst[i] = src[i];
		}
		i++;
	}
	dst[i] = '\0';
	return (j);
}
