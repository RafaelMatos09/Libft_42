#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    int i;
    char *d = (char *)dest;
    const char *s = (const char *)src;

    if (!dest && !src)
    {
        return (dest);
    }

    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }

    return (dest);
}