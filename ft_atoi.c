/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:43:41 by dphan             #+#    #+#             */
/*   Updated: 2023/03/15 11:43:42 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	i;
	int sign;
    int res;
	
	i = 0;
	sign = 1;
    res = 0;
    while (str[i] != '\0')
    {   
        while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
        {
            i++;
        }

        if (str[i] == '-')
        {
            sign = sign * -1;
        }
        if (str[i] == '+' || str[i] == '-')
        {
            i++;
        }
        while (str[i] >= '0' && str[i] <= '9')
        {
            if (res > 2147483647 / 10 || (res == 2147483647 / 10 && str[i] - '0' > 7))
            {
                if (sign == 1)
                {
                    res = 2147483647;
                    return res;
                }
                else 
                {
                    res = -2147483648;
                    return res;
                }
            }
            res = res * 10 + (str[i] - '0');
            i++;
        }
        i++;
    }
	return (res * sign);
}

#include <stdio.h>
int	main(void)
{
	char word[] = "12323456789098";
	char *str;

	str = word;

	printf("%d\n", ft_atoi(str));
	return (0);
}

