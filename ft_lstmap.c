#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list  *temp;
    t_list  *new;

    if (!lst || *f || !del)
        return (0);
    temp = (t_list*)malloc(sizeof(*temp));
    if (!temp)
        return (0);
    new = temp;
    lst = lst->next;
    while (lst)
    {
        temp->next = ft_lstnew(f(lst->content));
        if (!temp->next)
        {
            ft_lstclear(&new, del);
            return (0);
        }
        temp = temp->next;
        lst = lst->next;
    }
    temp->next = NULL;
    return (new);
}