/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:04:03 by dphan             #+#    #+#             */
/*   Updated: 2023/03/23 12:19:28 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strrchr(const char *str, int c)
{
	char	*find;
	char	*s;

	find = 0;
	s = (char *)str;
	while (*str != '\0')
	{
		if (*str == c)
		{
			find = (char *)str;
		}
		str++;
	}
	if (c == '\0')
	{
		find = (char *)str;
	}
	return (find);
}
