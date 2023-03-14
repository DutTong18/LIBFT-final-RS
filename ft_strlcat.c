#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  dstlen;

    i = 0;
    dstlen = ft_strlen(dst);
    while (*dst != '\0' && size > 0)
    {
        dst++;
        i++;
        size--;
    }

    while(*src != '\0' && size > 1)
    {
        *dst++ = *src++;
        size--;
    }
    if (size == 1 || *src == 0)
    {
        *dst = '\0';
    }
    return (dstlen + i);
}

int	main(void)
{
	char	new[100] = "test";
	char	old[100] = "123";
	char	*d;
	char	*s;

	d = new;
	s = old;
	printf("%ld\n", ft_strlcat(d, s, 0));
}