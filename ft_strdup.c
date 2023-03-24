/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:50:22 by dphan             #+#    #+#             */
/*   Updated: 2023/03/24 14:28:06 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char *	ft_strdup(const char *s1)
{
	char	*str;
	char	*s2 = (char *)s1;
	
	str = (char *) malloc(sizeof(s1));
	while (str)
	{
		str = s2;
		str++;
		s2++;
	}
	*str = '\0';
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char *src = "hello";
	char *str;

	str = ft_strdup(src);
	printf("%s\n", str);
	free(str);
	return (0);
}
