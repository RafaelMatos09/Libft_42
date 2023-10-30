#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_strlen(const char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

char *ft_word_dup(const char *str, int start, int end)
{
    int length = end - start;
    char *src = (char *)malloc((length + 1) * sizeof(char));

    if (src)
    {
        int i = 0;
        int j = start;
        while (i < length)
        {
            src[i] = str[j];
            i++;
            j++;
        }
        src[length] = '\0';
    }

    return src;
}

int count_substrings(const char *s, char c)
{
    int len = ft_strlen(s);
    int count = 0;
    int i = 0;
    int j = 0;

    while (i < len)
    {
        while (i < len && s[i] == c)
            i++;
        while (i < len && s[i] != c)
        {
            i++;
            j++;
        }
        if (j > 0)
        {
            count++;
            j = 0;
        }
    }

    return count;
}

char **ft_split(const char *s, char c)
{
    size_t i;
    size_t j;
    int index;
    char **result;

    if (!s || !(result = (char **)malloc((count_substrings(s, c) + 1) * sizeof(char *))))
        return (0);

    i = 0;
    j = 0;
    index = -1;
    while (s[i] != '\0')
    {
        if (s[i] != c && index < 0)
            index = i;
        else if ((s[i] == c || s[i + 1] == '\0') && index >= 0)
        {
            result[j++] = ft_word_dup(s, index, i + ((s[i + 1] == '\0') ? 1 : 0));
            index = -1;
        }
        i++;
    }
    result[j] = '\0';
    return result;
}

int main(void)
{
    const char *str = "vou ali, quando voltar, ja venho.";
    char **split_strings = ft_split(str, ',');
    if (split_strings == NULL)
    {
        printf("Erro ao dividir a string.\n");
        return 1;
    }

    int i = 0;
    while (split_strings[i])
    {
        printf("%s\n", split_strings[i]);
        free(split_strings[i]);
        i++;
    }
    free(split_strings);
    return 0;
}
