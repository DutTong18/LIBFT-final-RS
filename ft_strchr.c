/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 10:55:39 by dphan             #+#    #+#             */
/*   Updated: 2023/03/31 13:03:58 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != (unsigned char)c)
	{
		if (*str == '\0')
		{
			return (0);
		}
		str++;
	}
	if (!(unsigned char)c)
	{
		return (str);
	}
	return (str);
}
