/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:18:58 by dphan             #+#    #+#             */
/*   Updated: 2023/03/28 14:12:53 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		lens1;
	int		lens2;
	char	*new;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	if (!s1 || !s2)
		return (0);
	new = (char *)malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (!new)
		return (0);
	while (*s1)
	{
		*new = *s1;
		new++;
		s1++;
	}
	while (*s2)
	{
		*new = *s2;
		new++;
		s2++;
	}
	*new = '\0';
	return (new - (lens1 + lens2));
}
