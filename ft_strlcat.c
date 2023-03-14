#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

size_t  strlcat(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  dstlen;

    i = 0;
    dstlen = ft_strlen(dst);
    
    
}