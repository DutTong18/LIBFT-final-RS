/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtong <dtong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 20:51:26 by dtong             #+#    #+#             */
/*   Updated: 2023/08/12 20:52:56 by dtong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int j)
{
	if (j >= 32 && j <= 126)
		return (1);
	else
		return (0);
}
