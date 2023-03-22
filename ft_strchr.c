/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 10:55:39 by dphan             #+#    #+#             */
/*   Updated: 2023/03/22 16:17:46 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strchr(const char *s, int c)
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
/*
#include <stdio.h>

int	main(void)
{
    char *str = "Hello, how are you";
    char c;

    c = 'e' + 23;
    char *ret = ft_strchr(str, c);

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
*/
