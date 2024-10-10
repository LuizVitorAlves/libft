//Copia uma área da memoria de um local para outro
//Declarar ponteiros para a área de destino e de origem
// Se os ponteiros de destino e origem forem iguais, não é necessário copiar
// Se a área de destino está após a área de origem
// Cópia reversa para evitar sobreposição, byte a byte do fim para o inicio
// Se a área de destino está antes da área de origem, cópia direta, pois não há sobreposição

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d = (unsigned char *)dst;
    const unsigned char *s = (const unsigned char *)src;
    
    if (d == s)
        return dst;
    if (d > s)
    {
        while (len--)
            d[len] = s[len];
    }
    else
    {
        while (len--)
            *d++ = *s++;
    }
    return dst;
}
