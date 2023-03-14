#include <stdio.h>

char    *ft_strrchr(const char *str, int c)
{
    char *find = NULL;

    while (*str != '\0')
    {
        if(*str == c)
        {
            find = (char *)str;
        }
        str++;
    }
    return (find);
}

int main(void)
{
    char *str = "Hello, how are you Harry";
    char c;

    c = 'Z';
    char *ret = ft_strrchr(str, c);

    if(ret == NULL)
    {
        printf("Not found\n");
    }
    else
    {
        printf("%s\n", ret);
    }
    return (0);
}