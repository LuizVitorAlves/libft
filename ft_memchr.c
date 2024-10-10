//Localiza a primeira aparição de um caractere especifico dentro de uma área da memoria
//Criar um ponteiro que aponte para o mesmo lugar do que s (unsigned char para percorrer byte a byte)
//Criar um looping que vai decrementar n até chegar a zero
//Verifica se o byte apontado é equivalente ao caractere
//Se encontrado retorna a posição da memória
//Caso não encontre retorna NULL

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *ptr = (const unsigned char *)s;

    while (n--)
    {
        if (*ptr == (unsigned char)c)
            return (void *)ptr;
        ptr++;
    }
    return NULL;
}
