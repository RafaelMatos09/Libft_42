#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str);

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    int i;
    char *d = (char *)dest;
    const char *s = (const char *)src;

    if (!dest && !src)
    {
        return (dest);
    }

    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }

    return (dest);
}

unsigned int ft_strlcpy(char *dest, const char *src, unsigned int size)
{
    unsigned int srcl;

    srcl = ft_strlen((char *)src);

    if (size)
    {
        unsigned int len;

        len = (srcl >= size) ? size - 1 : srcl;
        ft_memcpy(dest, src, len);
        dest[len] = '\0';
    }
    return (srcl);
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

int ft_check_set(char c, const char *set)
{
    while (*set)
    {
        if (*set == c)
        {
            return (1);
        }
        set++;
    }
    return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
    int i;
    unsigned int outstr_size;
    char *outstr_start;
    char *outstr_end;
    char *outstr;

    if (!s1 || !set)
        return (NULL);
    i = 0;
    while (s1[i] && ft_check_set(s1[i], set))
        i++;
    outstr_start = (char *)&s1[i];
    if ((i = ft_strlen((char *)s1) - 1) != -1)
        while (i >= 0 && ft_check_set(s1[i], set))
            i--;
    outstr_end = (char *)&s1[i];
    if (!*s1 || outstr_end == outstr_start)
        outstr_size = 2;
    else
        outstr_size = outstr_end - outstr_start + 2;
    if (!(outstr = malloc(sizeof(char) * outstr_size)))
        return (NULL);
    ft_strlcpy(outstr, outstr_start, outstr_size);
    return (outstr);
}

int main()
{
    const char *s1 = "  Hello, World ";
    const char *set = " ";
    char *trimmed = ft_strtrim(s1, set);

    if (trimmed)
    {
        printf("%s \n", s1);
        printf("%s \n", trimmed);
        free(trimmed);
    }
    return 0;
}
