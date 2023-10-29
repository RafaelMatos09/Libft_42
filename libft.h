#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* Libc functions*/

int ft_strlen(char *str);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int isascii(int c);
int ft_isprint(int c);
void *ft_memset(void *ptr, int value, size_t size);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
unsigned int ft_strlcpy(char *dest, const char *src, unsigned int size);
unsigned int ft_strlcat(char *dest, const char *src, unsigned int size);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *str, int c);
int ft_memcmp(const void *s1, const void *s2, unsigned int n);
char *ft_strnstr(const char *str, const char *find, size_t size);
char *ft_strdup(char *str);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int, char *));
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char const *s, int fd);
void ft_putendl_fd(char const *s, int fd);
void ft_putnbr_fd(int nb, int fd);
char **ft_split(char const *s, char c);

#endif