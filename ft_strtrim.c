#include <stdlib.h> // Para malloc e NULL
#include "libft.h" // Para ft_strlen

/**
 * is_in_set - Verifica se um caractere está no conjunto 'set'
 * @c: O caractere a verificar.
 * @set: O conjunto de caracteres a verificar contra.
 *
 * Retorna 1 se o caractere estiver no conjunto, 0 caso contrário.
 */
static int	is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

/**
 * ft_strtrim - Remove caracteres do início e do final da string 's1' que estão no conjunto 'set'
 * @s1: A string a ser cortada.
 * @set: O conjunto de caracteres a ser removido.
 *
 * Retorna a nova string cortada, ou NULL se a alocação falhar.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	// Verifica se as strings são nulas
	if (!s1 || !set)
		return (NULL);
	
	start = 0;
	// Encontra o primeiro caractere que não está no conjunto
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	// Encontra o último caractere que não está no conjunto
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	// Retorna a substring correspondente
	return (ft_substr(s1, start, end - start));
}
