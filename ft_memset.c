/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dphan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:42:15 by dphan             #+#    #+#             */
/*   Updated: 2023/03/15 11:42:21 by dphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void    *ft_memset(void *s, int c, unsigned int n)
{
    unsigned char   *str = s;
    while (n > 0)
    {
        *str = (unsigned char) c;
        str++;
        n--;
    }
    return (s);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    char *str;
    
    str = strdup("hello");

    ft_memset(str + 1, '.', 2);
    printf("%s\n", str);
}