/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:42:42 by dphan             #+#    #+#             */
/*   Updated: 2023/03/15 11:42:44 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_memmove(void *str1, const void *str2, unsigned int n)
{
	char *dest = (char *)str1;
	char *src = (char *)str2;

	if ((src < dest) && (dest < src + n))
	{
		while (n > 0)
		{
		*(dest + n) = *(src + n);
		n--;
		}
	}
	else 
	{
		while (n > 0)
		{
			*dest++ = *src++;
			n--;
		}
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char src[100] = "Hello Danny, How are you?";

	ft_memmove(src + 7, src + 5, strlen(src) + 6);
	printf("%s\n", src);
}