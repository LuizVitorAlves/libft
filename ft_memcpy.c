//Copiar uma área de memoria para outra

#include <stddef.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d = dest; // Ponteiro para a área de destino
    const unsigned char *s = src; // Ponteiro para a área de origem

    // Copia n bytes de s para d
    while (n--)
    {
        *d++ = *s++;
    }
    return dest;
}
