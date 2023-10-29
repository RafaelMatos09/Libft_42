#include "libft.h"
#include <stdio.h>

char *ft_strchr(const char *str, int c)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == (unsigned char)c)
            return ((char *)&str[i]);
        i++;
    }
    if ((unsigned char)c == str[i])
        return ((char *)&str[i]);
    return (NULL);
}

int main(void)
{
    printf("%s\n", ft_strchr("teste", 'e'));
}