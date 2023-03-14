#include <stdio.h> 

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    int i;
    int res;

    i = 0;
    if (n < 1)
        return (0);
    while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
    {
        if (s1[i] == s2[i])
        {
            res = 0;
        }
        else if(s1[i] < s2[i])
        {
            return (-1);
        }
        else
        {
            return (1);
        }
        i++;
    }
    return (res);
}

int main(void)
{
    char    *s1 = "Hello";
    char    *s2 = "HeLlo";
    int res;


    res = ft_strncmp(s1, s2, 3);

    printf("%d\n", res);
}