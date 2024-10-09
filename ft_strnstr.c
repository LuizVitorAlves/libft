//Procura a primeira apairição de uma substring dentro de uma string, dentro de um numero limitado de caracteres

#include <stddef.h>

char *ft_strnstr(const char *str, const char *search, size_t len)
{
    size_t search_len = 0;

    // Se search é uma string vazia, retorna str
    if (!*search)
        return (char *)str;
    // Calcula o comprimento de search
    while (search[search_len])
        search_len++;
    // Loop para procurar search dentro de str
    while (len >= search_len && *str)
    {
        // Verifica se a parte atual de str corresponde a search
        if (!ft_strncmp(str, search, search_len))
            return (char *)str;
        str++;
        len--;
    }
    // Se não encontramos search, retorna NULL
    return NULL;
}
