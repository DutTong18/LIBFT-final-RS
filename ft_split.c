/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:20:18 by dphan             #+#    #+#             */
/*   Updated: 2023/03/24 15:20:40 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int  ft_count(char const *s, char c)
{
    int i;
    int words;

    i = 0;
    words = 0;
    while (*s)
    {
        if (*s == c)
        {
            words = 0;
        }
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
    int     len1;
    int     len2;
    int     i;
    char    **str;
    char    **str2;
    char    *start;
    char    *end;

    len = ft_count(s, c);
    if !(str = (char **)malloc(sizeof(char *) * len + 1))
        return (0);
    while (*s)
    {
        if (*s == c)
        {
            s++;
        }
        start = s;
        while (*s && *s != c)
        {
            s++;
        }
        end = s;
        len2 = end - start;
        if !(str2 = (char *)malloc(sizeof(char) * len + 1))
            return (0);
        ft_strlcpy(str2, start, len2);
        i = 0;
        str2 + len = '\0';
        str[i++] = str2;
    }
    str[i] = '\0';
    return (str);
}
