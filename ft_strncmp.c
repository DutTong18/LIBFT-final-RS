/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:17:27 by dphan             #+#    #+#             */
/*   Updated: 2023/03/15 11:23:53 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	res;

	i = 0;
	if (n < 1)
		return (0);
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
		{
			res = 0;
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		else
		{
			return (1);
		}
		i++;
	}
	return (res);
}
/*
#include <stdio.h> 

int main(void)
{
    char    *s1 = "Hello";
    char    *s2 = "HeLlo";
    int res;


    res = ft_strncmp(s1, s2, 3);

    printf("%d\n", res);
}
*/
