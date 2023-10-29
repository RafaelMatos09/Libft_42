#include <stdio.h>
#include <stdlib.h>

char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

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

char **ft_split(char const *s, char c)
{
    int len;
    int i;
    int old_i;
    int *count;

    len = ft_strlen(s);
    i = 0;
    count = 0;
    while (i < len)
    {
        if (ft_strchr(c, s[i]) == NULL)
            break;
        i++;
    }

    old_i = i;
    while (i < len)
    {
        if (ft_strchr(c, s[i]) != NULL)
            break;
        i++;
    }

    if (i > old_i)
        *count = *count + 1;

    char **s = malloc(sizeof(char *) * *count);

    i = 0;

    char buffer[16384];
    int string_index;

    string_index = 0;
    while (i < len)
    {
        if (ft_strchr(c, s[i]) == NULL)
            break;
        i++;
    }

    int j;

    j = 0;
    while (i < len)
    {
        if (ft_strchr(c, s[i]) != NULL)
            break;

        buffer[j] = s[i];
        i++;
        j++;
    }

    if (j > 0)
    {
        buffer[j] = '\0';

        int to_allocate;

        to_allocate = sizeof(char) * (ft_strlen(buffer) + 1);

        s[string_index] = malloc(to_allocate);

        ft_strcpy(s[string_index], buffer);

        string_index++;
    }

    return (s);
}

int main(void)
{
    const char *str[];

    str = "vou ali, quando voltar, ja venho.";

    char **split_strings = ft_split(str, ',');

    int i;

    i = 0;
    while (str[i])
    {
        printf("%s\n", split_strings[i]);
    }

    while (str[i])
    {
        free(split_strings[i]);
    }

    free(split_strings);

    return (0);
}