/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:53:41 by dphan             #+#    #+#             */
/*   Updated: 2023/03/15 10:51:43 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isdigit(char *str)
{
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			str++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_isdigit("123"));
	printf("%d\n", ft_isdigit("abc"));
	printf("%d\n", ft_isdigit("123abc"));
}
