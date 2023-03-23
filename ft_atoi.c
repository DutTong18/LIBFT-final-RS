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
	unsigned int	i;
	unsigned int	sign;
	unsigned int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (*str++)
	{
		if (*str == 32 || (*str > 8 && *str < 14))	
			str++;
			i++;
		if (*str == '-')
			sign = sign * -1;
		if (*str == '+' || *str == '-')
			str++;
		if (*str >= '0' && *str <= '9')
			res = res * 10 + (*str - '0');
	}
	return (res * sign);
}
/*
#include <stdio.h>

int	main(void)
{
	char *str = "  -+123";
	
	printf("%d\n", ft_atoi(str));
	return (0);
}*/
