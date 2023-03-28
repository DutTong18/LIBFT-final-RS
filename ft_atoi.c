/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:43:41 by dphan             #+#    #+#             */
/*   Updated: 2023/03/28 13:33:08 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(const char *str)
{
	unsigned int	sign;
	unsigned int	res;
	unsigned char	*s;

	sign = 1;
	res = 0;
	s = (unsigned char *)str;
	while (*s == 32 || (*s > 8 && *s < 14))
	{
		s++;
	}
	if (*s == '-' || *s == '+')
	{
		if (*s++ == '-')
		{
			sign *= -1;
		}
	}
	while (*s >= '0' && *s <= '9')
	{
		res = res * 10 + (*s - '0');
		s++;
	}
	return (res * sign);
}
