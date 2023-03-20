/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:42:31 by dphan             #+#    #+#             */
/*   Updated: 2023/03/15 11:42:34 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_bzero(void *s, unsigned int n)
{
	char *str = (char *) s;
	
	while (n > 0)
	{
		*str++ = '0';
		n--;
	}
}

#include <stdio.h>

int	main(void)
{
	char str[10] = "hello";
	ft_bzero(str, 4);
	
	printf("%s\n", str);
}

