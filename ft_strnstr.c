#include <stdio.h>

char *ft_strnstr(const char *str, const char *find, size_t size)
{
    int i;
    int j;

    i = 0;
    if (find[0] == '\0')
        return (char *)str;
    while (str[i] != '\0' && i < size)
    {
        j = 0;
        while (str[i + j] != '\0' && i + j < size && str[i + j] == find[j])
        {
            if (find[j + 1] == '\0')
                return ((char *)&str[i]);
            j++;
        }
        i++;
    }
    return (0);
}

int main(void)
{
    char *str = "palheiro";
    char *find = "ei";
    printf("%s\n", ft_strnstr(str, find, 8));
}