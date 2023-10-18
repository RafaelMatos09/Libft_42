#include "libft.h"

unsigned int ft_strlcat(char *dest, const char *src, unsigned int size)
{
    unsigned int dest_len;
    unsigned int total_len;
    const char *s;

    s = src;
    dest_len = 0;
    while (*(dest + dest_len) && dest_len < size)
        dest_len++;
    if (dest_len < size)
        total_len = dest_len + ft_strlen(s);
    else
        return (size + ft_strlen(s));
    while (*s && (dest_len + 1) < size)
    {
        *(dest + dest_len) = *s++;
    }
    *(dest + dest_len) = '\0';
    return (total_len);
}