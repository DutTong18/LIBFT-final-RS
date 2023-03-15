/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 11:33:10 by dphan             #+#    #+#             */
/*   Updated: 2023/03/15 10:49:40 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_isalpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str<= 'Z'))
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
	printf("%d\n", ft_isalpha("hell"));
	printf("%d\n", ft_isalpha("h3llo"));
	printf("%d\n", ft_isalpha("123"));
	printf("%d\n", ft_isalpha("HELLO"));
	printf("%d\n", ft_isalpha("abc"));
}
