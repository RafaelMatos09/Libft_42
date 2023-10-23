#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>

/* Libc functions*/

int ft_strlen(char *str);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int isascii(int c);
int ft_isprint(int c);
void ft_memset(void *ptr, int value, size_t size);
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

#endif