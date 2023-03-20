/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 10:55:39 by dphan             #+#    #+#             */
/*   Updated: 2023/03/15 11:03:44 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return 	((char *)s);
		}
		s++;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
    char *str = "Hello, how are you";
    char c;

    c = 'o';
    char *ret = strchr(str, c);

    if(ret == 0)
    {
        printf("Not found\n");
    }
    else
    {
        printf("%s\n", ret);
    }
    
    return (0);
}
