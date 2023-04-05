#include "libft.h"

int	ft_lstsize(t_list *lst)
{
    int     i;
    t_list  *temp;

    i = 0;
    temp = (t_list*)lst;
    while (temp)
    {
        temp = temp->next;
        i++;
    }
    return (i);
}