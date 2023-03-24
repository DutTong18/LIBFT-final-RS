/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:28:21 by dphan             #+#    #+#             */
/*   Updated: 2023/03/24 16:18:19 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		l = len - start;
	
	sub = (char *)malloc(sizeof(char) * (l + 1));
	while (*(s + start) != '\0' && len > start)
	{
		*sub = *(s + start);
		sub++;
		s++;
		len--;
	}
	*sub = '\0';
	return (sub - l);
}
#include <stdio.h>

int	main(void)
{
	char *s = "hello world";
	char *dest;

	dest = ft_substr(s, 8, 9);
	printf("%s\n", dest);
	return (0);
}
