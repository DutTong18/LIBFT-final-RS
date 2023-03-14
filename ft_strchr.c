#include <stdio.h>

char    *strchr(const char *s, int c)
{
    while (*s != '\0')
    {
        if (*s == c)
        {
            return ((char *)s);
        }
        s++;
    }
    return NULL;
}

int main(void)
{
    char *str = "Hello, how are you";
    char c;

    c = 'z';
    char *ret = strchr(str, c);

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