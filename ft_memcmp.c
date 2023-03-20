/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:43:29 by dphan             #+#    #+#             */
/*   Updated: 2023/03/15 11:43:31 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_memcmp(const void *str1, const void *str2, unsigned int n)
{
	char	*s1 = (char *) str1;
	char	*s2 = (char *) str2;
	int res;

	while (*s1 || *s2 & n > 0)
	{
		if (*s1 < *s2)
		{
			return (-1);
		}
		else if(*s1 > *s2)
		{
			return (1);
		}
		else 
		{
			res = 0;
		}
		s1++;
		s2++;
	}
	return (res);
}

#include <stdio.h> 

int main(void)
{
    char    *s1 = "HeLlo";
    char    *s2 = "Hello";
    int res;


    res = ft_memcmp(s1, s2, 3);

    printf("%d\n", res);
}
