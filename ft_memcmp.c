#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
    unsigned char *ptr;
    unsigned char *ptr2;
    int i;

    ptr = (unsigned char *)s1;
    ptr2 = (unsigned char *)s2;
    i = 0;
    while (i < n)
    {
        if (ptr[i] == ptr2[i])
            i++;
    }
    return (ptr[i] - ptr2[i]);
}

int main(void)
{
    char *str1 = "abc";
    char *str2 = "abc";
    printf("%d", ft_memcmp(str1, str2, 3));
}