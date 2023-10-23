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

char *ft_strjoin(char const *s1, char const *s2)
{
    unsigned int index;
    unsigned int all_size;
    char *result;

    if (!s1 && !s2)
    {
        if (s1)
        {
            return (ft_strdup((char *)s1));
        }
        else if (s2)
        {
            return (ft_strdup((char *)s2));
        }
        else
        {
            return (ft_strdup(""));
        }
    }

    all_size = ft_strlen((char *)s1) + ft_strlen((char *)s2);
    result = (char *)malloc((all_size + 1) * sizeof(char));
    if (!result)
        return (result);

    index = 0;
    while (*s1)
    {
        result[index++] = *s1;
        s1++;
    }
    while (*s2)
    {
        result[index++] = *s2;
        s2++;
    }

    result[index] = '\0';
    return (result);
}

int main()
{
    char *str_prefix = "firstString";
    char *str_suffix = "secondString";
    printf("%s\n", ft_strjoin(str_prefix, str_suffix));
    return (0);
}