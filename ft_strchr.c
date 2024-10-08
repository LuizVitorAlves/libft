//Localiza o primeiro caractere dentro de uma string e retorna sua posição

char *ft_strchr(const char *s, int c)
{
    // Anda na string até chegar o final
    while (*s != '\0')
    {
        // vai retornar a posição do caractere na string se encontrado
        if (*s == (char)c)
        {
            return (char *)s;
        }
        s++;
    }
    // Se o caractere for '\0', retorna a posição para o final da string
    if (c == '\0')
    {
        return (char *)s;
    }
    // Se não encontrar o caractere, retorna NULL
    return NULL;
}
/*
#include <stdio.h>

int main(void)
{
    const char *str = "42 Rio";
    char *result = ft_strchr(str, 'R');

    if (result != NULL)
    {
        printf("Character position: %ld\n", result - str);
    }
    else
    {
        printf("Error!\n");
    }

    return 0;
}
*/
