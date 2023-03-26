/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:43:41 by dphan             #+#    #+#             */
/*   Updated: 2023/03/23 14:49:28 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(const char *str)
{
	unsigned int	sign;
	unsigned int	res;

	sign = 1;
	res = 0;
	while (*str == 32 || (*str > 8 && *str < 14))
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
		{
			sign *= -1;
		}
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char *str = "--123";
	
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str))
;	return (0);
}
*/
