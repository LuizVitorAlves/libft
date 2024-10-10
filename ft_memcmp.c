//Compara duas áreas byte a byte
//Criar um ponteiro para percorrer cada área (unsigned char para percorrer byte a byte)
//Looping até o n chegar a zero, decrementando um
//Verifica se os ponteiros são diferentes
//Retorno da diferença
//Se não encontrar nada retorna zero

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *p1 = (const unsigned char *)s1;
    const unsigned char *p2 = (const unsigned char *)s2;

    while (n--)
    {
        if (*p1 != *p2)
            return (*p1 - *p2);
        p1++;
        p2++;
    }
    return 0;
}
