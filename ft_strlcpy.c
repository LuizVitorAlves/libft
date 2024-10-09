//Copia uma string para um buffer, respeitando o tamanho passado no parametro

#include <stddef.h>

size_t ft_strlcpy(char *dest, const char *src, size_t destsize)
{
    size_t i = 0;
    size_t src_len = 0;

    // Calcula o comprimento de src
    while (src[src_len] != '\0')
    {
        src_len++;
    }
    // Se destsize for maior que 0, realiza a cópia de src para dest
    if (destsize > 0)
    {
        while (src[i] != '\0' && i < (destsize - 1))
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0'; // Garante que a string de destino seja terminada em '\0'
    }
    return src_len; // Retorna o comprimento de src
}
