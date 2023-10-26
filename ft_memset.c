#include "libft.h"

void *ft_memset(void *ptr, int value, size_t size)
{
    size_t i;
    unsigned char *p = ptr;

    i = 0;
    while (i < size)
    {
        p[i] = (unsigned char)value;
        i++;
    }
    return (ptr);
}