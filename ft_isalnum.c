#include <stdio.h>

int ft_isalnum(char *str)
{
    while (*str != '\0')
    {
        if ((*str >= 48 && *str <= 57) || (*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122))
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
    printf("%d\n", ft_isalnum("123"));
    printf("%d\n", ft_isalnum("abc"));
    printf("%d\n", ft_isalnum("ABC"));
    printf("%d\n", ft_isalnum("abcABC123"));
    printf("%d\n", ft_isalnum("~"));
    printf("%d\n", ft_isalnum(" "));
}