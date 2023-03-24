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

	if (*need == '\0')
	{
		return (hay);
	}
	while (*hay == '\0' && len > 0)
	{
		if (*hay == *need)
		{
			hay++;
			need++;
		}
		else
		{
			return (hay);
		}
		len--;
	}
	return (hay);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *h = "hello world";
	char *n = "hello rorld";

	printf("%s\n", ft_strnstr(h, n, 9));
}
