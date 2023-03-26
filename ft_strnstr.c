/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 16:17:57 by dphan             #+#    #+#             */
/*   Updated: 2023/03/24 17:12:07 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hay = (char *)haystack;
	char	*need = (char *)needle;
	size_t	i;
	size_t	j;

	i = 0;
	if (*need == '\0')
	{
		return (hay);
	}
	while (hay[i] != '\0' && i < len)
	{
		j = 0;
		if (hay[i] == need[j])
		{
			while (i + j < len && hay[i + j] == need[j])
			{
				j++;
				if (need[j] == '\0')
				{
					return (&hay[i]);
				}
			}
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *h = "hello world";
	char *n = "hello rorld";

	char *res = ft_strnstr(h, n, 9);

	printf("%s\n", res);
}
