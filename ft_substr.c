/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:28:21 by dphan             #+#    #+#             */
/*   Updated: 2023/03/28 13:29:09 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	l;

	l = 0;
	if (!*s)
		return (0);
	if (start >= ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (0);
	while (*(s + start) != '\0' && l < len)
	{
		*sub = *(s + start);
		sub++;
		s++;
		l++;
	}
	*sub = '\0';
	return (sub - l);
}
