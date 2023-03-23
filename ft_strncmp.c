/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:17:27 by dphan             #+#    #+#             */
/*   Updated: 2023/03/23 13:26:31 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	res;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] == s2[i])
		{
			res = 0;
		}
		else if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{	
			return (-1);
		}
		i++;
	}
	return (res);
}

#include <stdio.h>
int	main(void)
{
	char *s1 = "test\200";
	char *s2 = "test\0";
	
	printf("%d\n", ft_strncmp(s1, s2, 6));
	return (0);
}

