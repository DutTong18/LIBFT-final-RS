#include <stdio.h>

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while (src[i] != '\0')
    {
        if(size > 0 && (i < (size - 1))) 
        {
            dst[i] = src[i];
            j++;
        }
        i++;
    }
    dst[i] = '\0';
    return (j);
}

#include <string.h>
int	main(void)
{
	char	new[100] = "testing";
	char	old[100] = "12345454545";
	char	*d;
	char	*s;

	d = new;
	s = old;
	printf("%ld\n", ft_strlcpy(d, s, 0));

}