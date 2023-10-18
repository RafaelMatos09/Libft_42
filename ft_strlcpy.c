#include "libft.h"

unsigned int ft_strlcpy(char *dest, const char *src, unsigned int size)
{
    unsigned int srcl;

    srcl = ft_strlen(src);

    if (size)
    {
        unsigned int len;

        len = (srcl >= size) ? size - 1 : srcl;
        ft_memcpy(dest, src, len);
        dest[len] = '\0';
    }
    return (srcl);
}