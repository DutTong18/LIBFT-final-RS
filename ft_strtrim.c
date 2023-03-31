/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:19:43 by dphan             #+#    #+#             */
/*   Updated: 2023/03/31 11:29:43 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*empt(void)
{
	char	*empt;

	empt = malloc(sizeof(char));
	if (!empt)
		return (0);
	*empt = '\0';
	return (empt);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*str;

	start = 0;
	if (!s1 || !set)
		return (0);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (start == ft_strlen(s1))
		return (empt());
	end = ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, *(s1 + end)))
		end--;
	len = end - start + 1;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	ft_strlcpy(str, s1 + start, len + 1);
	str[len] = '\0';
	return (str);
}
