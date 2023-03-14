#include <stdio.h>

int ft_isprint(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 32 && *str <= 126)
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
    printf("%d\n", ft_isprint("123"));
    printf("%d\n", ft_isprint("abc"));
    printf("%d\n", ft_isprint("ABC"));
    printf("%d\n", ft_isprint("123abc"));
    printf("%d\n", ft_isprint(" "));
    printf("%d\n", ft_isprint("~"));
}