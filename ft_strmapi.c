/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:21:15 by dphan             #+#    #+#             */
/*   Updated: 2023/03/28 15:47:44 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	slen;
	unsigned int	i;
	char			*s1;

	slen = ft_strlen(s);
	i = 0;
	s1 = (char *)s;
	str = (char *)malloc(sizeof(char) * slen + 1);
	if (!str)
		return (0);
	while (s1[i] != '\0')
	{
		str[i] = f(i, s1[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
