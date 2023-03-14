

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