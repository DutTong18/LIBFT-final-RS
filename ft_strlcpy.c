/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:36:37 by dphan             #+#    #+#             */
/*   Updated: 2023/03/15 11:45:57 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		if (size > 0 && (i < (size - 1)))
		{
			dst[i] = src[i];
			j++;
		}
		i++;
	}
	dst[i] = '\0';
	return (j);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	new[100] = "testing";
	char	old[100] = "123456";
	char	*d;
	char	*s;

	d = new;
	s = old;
	printf("%d\n", ft_strlcpy(d, s, 4));
}
