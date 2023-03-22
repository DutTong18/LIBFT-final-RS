/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:04:03 by dphan             #+#    #+#             */
/*   Updated: 2023/03/22 14:40:45 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strrchr(const char *str, int c)
{
	char	*find;

	find = 0;
	while (*str != '\0')
	{
		if (*str == c)
		{
			find = (char *)str;
		}
		str++;
	}
	return (find);
}
/*
#include <stdio.h>

int main(void)
{
    char *str = "Hello, how are you Harry";
    char c;

    c = 'b';
    char *ret = ft_strrchr(str, c);

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
