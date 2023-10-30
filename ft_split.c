#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **ft_split(const char *s, char c)
{
    int len = strlen(s);
    int i = 0;
    int count = 0;
    while (i < len)
    {
        while (i < len && s[i] == c)
            i++;
        if (i < len && s[i] != c)
            count++;
        while (i < len && s[i] != c)
            i++;
    }

        char **result = (char **)malloc((count + 1) * sizeof(char *));

    i = 0;
    int string_index = 0;

    while (i < len)
    {
        while (i < len && s[i] == c)
            i++;

        if (i < len && s[i] != c)
        {
            int j = 0;
            while (i < len && s[i] != c)
            {
                i++;
                j++;
            }

            result[string_index] = (char *)malloc(j + 1);
            strncpy(result[string_index], s + i - j, j);
            result[string_index][j] = '\0';
            string_index++;
        }
    }

    result[count] = NULL;

    return result;
}

int main(void)
{
    const char *str = "vou ali, quando voltar, ja venho.";

    char **split_strings = ft_split(str, ',');

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
