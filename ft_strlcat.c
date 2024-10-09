//Concatena duas strings, respeitando o tamanho maximo, para que não ultrapasse o espaço alocado
//Passo 1: Calcular o tamanho de dst (respeitando o buffer)
//Passo 2: Calcular o tamanho de src
//Passo 3: (tratamento) se dstsize for menor ou igual a dst, não podemos concatenar, retornando o total que seria necessario
//Passo 4: concatenar src em dst
//Passo 5: Retorna o tamanho total da nova string

#include <stddef.h> 

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t d_len = 0;
    size_t s_len = 0;
    size_t i = 0;

    while (dst[d_len] && d_len < dstsize)
        d_len++;
    while (src[s_len])
        s_len++;
    if (d_len == dstsize)
        return (dstsize + s_len);
    while (src[i] && (d_len + i) < (dstsize - 1))
    {
        dst[d_len + i] = src[i];
        i++;
    }
    dst[d_len + i] = '\0';
    return (d_len + s_len);
}
