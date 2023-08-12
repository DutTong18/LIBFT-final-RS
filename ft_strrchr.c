/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtong <dtong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:46:05 by dtong             #+#    #+#             */
/*   Updated: 2023/08/12 20:53:26 by dtong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int j)
{
	char	*find;

	find = 0;
	while (*str != '\0')
	{
		if (*str == (unsigned char)j)
			find = (char *)str;
		str++;
	}
	if ((unsigned char)j == '\0')
	{
		find = (char *)str;
	}
	return (find);
}
