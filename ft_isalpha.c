
#include <stdio.h>

int ft_isalpha(char *str)
{
    while (*str != '\0')
    {
        if((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
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
    printf("%d\n", ft_isalpha("hello"));
    printf("%d\n", ft_isalpha("hell0"));
}