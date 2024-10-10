#include <stdlib.h> // Para malloc e NULL
#include "libft.h" // Para ft_strlen

/**
 * ft_strjoin - Concatena duas strings 's1' e 's2'
 * @s1: A string prefixo.
 * @s2: A string sufixo.
 *
 * Retorna a nova string concatenada, ou NULL se a alocação falhar.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	// Verifica se as strings são nulas
	if (!s1 || !s2)
		return (NULL);
	
	// Aloca memória para a nova string (soma dos tamanhos das strings + 1 para o nulo)
	new_str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new_str)
		return (NULL);
	
	i = 0;
	j = 0;
	// Copia 's1' para a nova string
	while (s1[i])
	{
		new_str[j++] = s1[i++];
	}
	i = 0;
	// Copia 's2' para a nova string
	while (s2[i])
	{
		new_str[j++] = s2[i++];
	}
	new_str[j] = '\0'; // Adiciona o caractere nulo no final
	return (new_str);
}
