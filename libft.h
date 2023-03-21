

#ifndef LIBFT_H
# define LIBFT_H_

int ft_isalpha(char *str);
int ft_isalnum(char *str);
int ft_isdigit(char *str);
int ft_isascii(char *Str);
int ft_isprint(char *str);
int ft_toupper(int ch);
int ft_tolower(int ch);
int ft_strlen(char *str);
char    *strchr(const char *s, int c);
char    *ft_strrchr(const char *str, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_atoi(char *str);
void	ft_bzero(void *s, unsigned int n);
unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size);
unsigned int	fd_strlcat(char *dst, const *src, unsigned int size);
void    *ft_memset(void *s, int c, unsigned int n);
void	*ft_memmove(void *str1, const void *str2, unsigned int n);
void	*ft_memcpy(void *dest, const void * src, unsigned int n);
int	ft_memcmp(const void *str1, const void *str2, unsigned int n);
void	*ft_memchr(const void *str, int c, unsigned int n);