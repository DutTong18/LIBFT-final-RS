/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtong <dtong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:48:10 by dtong             #+#    #+#             */
/*   Updated: 2023/08/12 20:53:17 by dtong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int j)
{
	char	*str;

	str = (char *)s;
	while (*str != (unsigned char)j)
	{
		if (*str == '\0')
			return (0);
		str++;
	}
	if (!(unsigned char)j)
		return (str);
	return (str);
}
