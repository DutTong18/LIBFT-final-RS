/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:43:16 by dphan             #+#    #+#             */
/*   Updated: 2023/03/15 11:43:17 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memchr(const void *str, int c, unsigned int n)
{
	char	*string = (char *) str;

	while (*string && n > 0)
	{
		if (*string == c)
		{
			return ((char *)string);
		}
		string++;
		n--;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    char *str = "Hello, how are you Harry";
    char c;

    c = ',';
    char *ret = ft_memchr(str, c, 7);

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
