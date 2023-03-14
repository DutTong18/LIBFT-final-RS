#include <stdio.h>

int ft_toupper(int ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }
    return (ch);
}

int main(void)
{
    char c;

    c = '9';
    printf("%c\n", ft_toupper(c));
}