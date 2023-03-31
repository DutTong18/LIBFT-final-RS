/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:04:03 by dphan             #+#    #+#             */
/*   Updated: 2023/03/31 13:04:23 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strrchr(const char *str, int c)
{
	char	*find;

	find = 0;
	while (*str != '\0')
	{
		if (*str == (unsigned char)c)
		{
			find = (char *)str;
		}
		str++;
	}
	if ((unsigned char)c == '\0')
	{
		find = (char *)str;
	}
	return (find);
}
