/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:20:18 by dphan             #+#    #+#             */
/*   Updated: 2023/03/31 13:32:49 by dphan            ###   ########.fr       */
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

char	**ft_split(char const *s, char c)
{
	char		**str;
	char const	*s1;
	char const	*start;
	size_t		slen;
	size_t		sublen;
	size_t		i;
	
	slen = ft_count(s, c);
	if (!(str = malloc(sizeof(char *) * (slen + 1))))
	{
		return (0);
	}
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
		i = 0;
		if (!(str[i] = malloc(sublen + 1)))
		{
			while (i > 0)
			{
				free(str[i]);
				i--;
			}
			free (str);
			return (0);
		}
		ft_strlcpy(str[i], start, sublen);
		str[i][sublen] = 0;
		i++;
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
