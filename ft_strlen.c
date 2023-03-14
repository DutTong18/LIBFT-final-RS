#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (*str != '\0')
    {
        i++;
        str++;
    }
    return (i);
}

int main(void)
{
    printf("%d\n", ft_strlen("hello world"));
}