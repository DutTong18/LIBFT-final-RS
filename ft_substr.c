/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtong <dtong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:45:50 by dtong             #+#    #+#             */
/*   Updated: 2023/08/12 20:53:28 by dtong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*empty(void)
{
	char	*empt;

	empt = malloc(sizeof(char) * 1);
	if (!empt)
		return (0);
	empt[0] = '\0';
	return (empt);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	l;
	size_t	slen;

	l = 0;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (empty());
	slen = ft_strlen(s + start);
	if (slen < len)
		len = slen;
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
