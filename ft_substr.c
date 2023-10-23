#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    if (!s)
        return NULL;

    if (start >= ft_strlen((char *)s))
        return NULL;

    char *dest = (char *)malloc(len + 1);

    if (!dest)
        return NULL;

    size_t i = 0;

    while (i < len && s[start + i] != '\0')
    {
        dest[i] = s[start + i];
        i++;
    }

    dest[i] = '\0';

    return dest;
}

int main(void)
{
    char src[] = "testest initteste testeteste";

    unsigned int start = 7;
    size_t size = 15;

    char *dest = ft_substr(src, start, size);

    printf("%s\n", dest);

    if (dest)
    {
        free(dest);
    }

    return (0);
}