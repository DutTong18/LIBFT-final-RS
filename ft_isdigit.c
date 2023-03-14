#include <stdio.h>

int ft_isdigit(char *str)
{
    while (*str != '\0')
    {
        if (*str >= '0' && *str <= '9')
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
    printf("%d\n", ft_isdigit("1234"));
    printf("%d\n", ft_isdigit("123abc"));
}