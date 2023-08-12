/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtong <dtong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:48:16 by dtong             #+#    #+#             */
/*   Updated: 2023/08/12 20:53:16 by dtong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int	i;
	int	words;	

	i = 0;
	words = 0;
	while (*s)
	{
		if (*s != c && !words)
		{
			words = 1;
			i++;
		}
		else if (*s == c)
			words = 0;
		s++;
	}
	return (i);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < n)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;
	size_t	len;
	size_t	start;

	if (!s)
		return (0);
	len = ft_count(s, c);
	str = (char **)malloc(sizeof(char *) * (len + 1));
	if (!str)
		return (0);
	i = 0;
	j = 0;
	while (j < len)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		str[j++] = ft_strndup(s + start, i - start);
	}
	str[j] = NULL;
	return (str);
}
