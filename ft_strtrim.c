/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:19:43 by dphan             #+#    #+#             */
/*   Updated: 2023/03/28 13:48:13 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*str;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start++;
	}
	end = ft_strlen(s1) + start ;
	while (end > start && ft_strchr(set, *(s1 + end)))
	{
		end--;
	}
	len = end - start + 1;
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
	{
		return (0);
	}
	ft_strlcpy(str, s1 + start, len + 1);
	str[len] = '\0';
	return (str);
}
/*
int main(void)
{
	char *str = "asdHelloasdworlda";

	printf("%s\n", ft_strtrim(str, "asd"));
}
*/