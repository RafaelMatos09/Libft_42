#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    const unsigned char *s;
    unsigned char *d;
    int i;

    if (!dest && !src)
        return (dest);
    if (dest < src)
        return (ft_memcpy(dest, src, n));
    s = (unsigned char *)src;
    d = (unsigned char *)dest;
    i = 0;
    while (i < n)
    {
        d[n] = s[n];
        i++;
    }
    return (dest);
}