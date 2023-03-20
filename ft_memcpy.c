/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:43:02 by dphan             #+#    #+#             */
/*   Updated: 2023/03/15 11:43:06 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memcpy(void *dest, const void * src, unsigned int n)
{
	char	*dst = (char *)	dest;
	char	*source = (char *)	src;

	if (dest == 0)
	{
		return 0;
	}

	while (*source && n > 0)
	{
		*dst++ = *source++;
		n--;
	}
	*dst = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = "hello world";
	char	dest[100];

	strcpy(dest, "hello");
	printf("before = %s\n", dest);
	ft_memcpy(dest, src, strlen(src) + 1);
	printf("after = %s\n", dest);
}
