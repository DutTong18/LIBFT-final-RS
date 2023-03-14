#include <stdio.h>

int ft_tolower(int ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }
    return (ch);
}

int main(void)
{
    char c;

    c = 'A';
    printf("%c\n", ft_tolower(c));
}