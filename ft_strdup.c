#include "libft.h"

char *ft_strdup(char *str)
{
    char *src;
    int lenght = ft_strlen(str);
    int i;

    src = (char *)malloc((lenght + 1) * sizeof(char));
    i = 0;
    if (src)
    {
        while (i < lenght)
        {
            src[i] = str[i];
        }
        src[lenght] = '\0';
    }

    return (src);
}