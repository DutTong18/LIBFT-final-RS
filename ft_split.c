/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:20:18 by dphan             #+#    #+#             */
/*   Updated: 2023/03/31 15:48:03 by dphan            ###   ########.fr       */
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
		if (*s == c)
			words = 0;
		else if (!words)
		{
			words = 1;
			i++;
		}
		s++;
	}
	return (words);
}

static char	*ft_free(char **s, size_t len)
{
	size_t i;
	
	while (i < len)
	{
		free (s[i]);
		i++;
	}
	free (tab);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char		**str;
	char const	*s1;
	char const	*start;
	size_t		sublen;
	size_t		i;
	size_t		j;
	
	j = 0;
	str = malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!str)
		return (0);
	s1 = s;
	while (*s1)
	{
		if (*s1 == c)
			s1++;
		start = s1;
		while (*s1 && *s1 != c)
		{
			s1++;
		}
		sublen = s1 - start;
		str[j] = ft_substr(s1, i, sublen);
		if (!str[j])
			return (ft_free(*str, j));
		j++;
		i = start;
	}
	str[slen] = NULL;
	return (str);
}
/*
int main(void)
{
    char **s = ft_split("Hello world, how are you?", ' ');
    if (s)
    {
        for (size_t i = 0; s[i]; i++)
        {
            printf("%s\n", s[i]);
            free(s[i]);
        }
    }
    free(s);
    
}
*/
