/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtong <dtong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:49:40 by dtong             #+#    #+#             */
/*   Updated: 2023/08/12 20:58:37 by dtong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_blank;

	if (!lst)
		return (NULL);
	new_list = (void *)0;
	while (lst)
	{
		new_blank = ft_lstnew(f(lst->content));
		if (!new_blank)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_blank);
		lst = lst->next;
	}
	return (new_list);
}
