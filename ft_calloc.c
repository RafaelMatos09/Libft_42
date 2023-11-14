#include "libft.h"

void *ft_calloc(size_t nitems, size_t size)
{
    char *dest;
    size_t i;

    dest = malloc(nitems * size);
    if (dest == NULL)
        return (NULL);
    i = 0;
    while (i < (nitems * size))
    {
        dest[i] = 0;
        i++;
    }
    return (dest);
}

/*
int main(void)
{
    char *ptr;

    ptr = ft_calloc(10, 1);
    ptr = "teste";
    printf("%s\n ", ptr);
}
*/
