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
		else if (words == 0)
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
	char	**str;
	size_t	i;
	size_t	j;

	str = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!str)
		return (0);
	i = 0;
	while (*s)
	{
		j = 0;
		while (*s == c && *s)
		{
			s++;
		}
		while (s[j] && s[j] != c)
		{
			j++;
		}
		str[i] = (char *)malloc(sizeof(char) * (j + 1));
		if (!str[i])
		{
			while (--i > 0)
			{
				free(str[i]);
			}
			free(str);
			return (0);
		}
		ft_strlcpy(str[i], s, j);
		str[i][j] = '\0';
		i++;
		s += j;
	}	
	str[i] = '\0';
	return (str);
}

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
	return (0);
}

