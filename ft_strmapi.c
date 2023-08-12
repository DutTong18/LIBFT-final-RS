/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtong <dtong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:46:44 by dtong             #+#    #+#             */
/*   Updated: 2023/08/12 20:53:24 by dtong            ###   ########.fr       */
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
