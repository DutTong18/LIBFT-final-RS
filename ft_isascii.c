#include <stdio.h>

int ft_isascii(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 0 && *str <= 127)
        {
            str++;
        }
        else
        {
            return (0);
        }
    }
    return (1);
}

int main(void)
{
    printf("%d\n", ft_isascii("123"));
    printf("%d\n", ft_isascii("abc"));
    printf("%d\n", ft_isascii("ABC"));
    printf("%d\n", ft_isascii("abcABC123"));
    printf("%d\n", ft_isascii("~"));
    printf("%d\n", ft_isascii(" "));
}