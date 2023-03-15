/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:55:35 by dphan             #+#    #+#             */
/*   Updated: 2023/03/15 10:54:14 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

int main(void)
{
	char *a;
	int	b;

	a  = "Hello, how are you";
	b = ft_strlen(a);
	printf("%d\n", b);
}
