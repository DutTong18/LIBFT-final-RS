/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:43:29 by dphan             #+#    #+#             */
/*   Updated: 2023/03/23 14:24:18 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	char	*s1;
	char	*s2;
	int		res;

	s1 = (char *)str1;
	s2 = (char *)str2;
	while (*s1 || (*s2 && n > 0))
	{
		if (*s1 < *s2)
		{
			return (-1);
		}
		else if (*s1 > *s2)
		{
			return (1);
		}
		else
		{
			res = 0;
		}
		s1++;
		s2++;
	}
	return (res);
}
