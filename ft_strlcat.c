/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:24:36 by dphan             #+#    #+#             */
/*   Updated: 2023/03/15 12:56:14 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dstlen;

	i = 0;
	dstlen = ft_strlen(dst);
	while (*dst != '\0' && size > 0)
	{
		dst++;
		i++;
		size--;
	}
	while (*src != '\0' && size > 1)
	{
		*dst++ = *src++;
		size--;
	}
	if (size == 1 || *src == 0)
	{
		*dst = '\0';
	}
	return (dstlen + i);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	new[100] = "test";
	char	old[100] = "123";
	char	*d;
	char	*s;

	d = new;
	s = old;
	printf("%d\n", ft_strlcat(d, s, 2));
}
