#include <stdlib.h> // Para malloc e NULL
#include "libft.h" // Para ft_strlen

/**
 * ft_substr - Cria uma substring a partir da string 's'
 * @s: A string da qual criar a substring.
 * @start: O índice inicial da substring na string 's'.
 * @len: O comprimento máximo da substring.
 *
 * Retorna a substring alocada, ou NULL se a alocação falhar.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	// Verifica se a string é nula
	if (!s)
		return (NULL);
	// Se o índice de início é maior que o comprimento da string, retorna uma string vazia
	if (start >= ft_strlen(s))
		return (malloc(1)); 
	// Ajusta 'len' se o comprimento restante da string for menor
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	// Aloca memória para a nova substring (+1 para o caractere nulo)
	substr = (char *)malloc(sizeof(char) * (len + 1));
	// Se a alocação falhar, retorna NULL
	if (!substr)
		return (NULL);	
	i = 0;
	// Copia os caracteres da string original para a substring
	while (i < len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0'; // Adiciona o caractere nulo no final
	return (substr);
}
