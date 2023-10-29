#include "libft.h"

char *ft_strdup(char *str)
{
    char *src;
    int length = ft_strlen(str);
    int i;

    src = (char *)malloc((length + 1) * sizeof(char));
    i = 0;
    if (src)
    {
        while (i < length)
        {
            src[i] = str[i];
        }
        src[length] = '\0';
    }

    return (src);
}