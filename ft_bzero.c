#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
    unsigned char *str;
    int i;

    str = (unsigned char*)s;
    i = 0;
    while(i < n)
    {
        str[i] = '\0';
        i++;
    }
}

int main() {
    unsigned char buffer[10] = "teste";  
    size_t n = sizeof(buffer);  

    printf("Antes de chamar ft_bzero:\n");
    for (int i = 0; i < n; i++) {
        printf("%02X ", buffer[i]);  
    }
    printf("\n");

    ft_bzero(buffer, n);  // Chame a função ft_bzero

    
    for (int i = 0; i < n; i++) {
        printf("%02X ", buffer[i]);  
    }
    printf("\n");

    return 0;
}