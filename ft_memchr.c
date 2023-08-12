/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtong <dtong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:49:21 by dtong             #+#    #+#             */
/*   Updated: 2023/08/12 20:53:07 by dtong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*string;
	unsigned char	*notfound;
	unsigned char	ch;

	string = (unsigned char *)str;
	ch = (unsigned char)c;
	notfound = 0;
	while (n > 0)
	{
		if (*string == ch)
		{
			return ((unsigned char *)string);
		}
		string++;
		n--;
	}
	return (notfound);
}
