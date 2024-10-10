#include <stdlib.h> // Para malloc e NULL
#include "libft.h" // Para ft_strlen

/**
 * ft_strmapi - Aplica uma função a cada caractere da string 's'
 * @s: A string na qual iterar.
 * @f: A função a aplicar a cada caractere.
 *
 * Retorna a nova string criada a partir das aplicações sucessivas de 'f', ou NULL se a alocação falhar.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	size_t	i;

	// Verifica se a string ou a função são nulas
	if (!s || !f)
		return (NULL);
	
	// Aloca memória para a nova string
	new_str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new_str)
		return (NULL);
	
	i = 0;
	// Aplica a função 'f' a cada caractere da string
	while (s[i])
	{
		new_str[i] = f(i, s[i]); // Chama a função passando o índice e o caractere
		i++;
	}
	new_str[i] = '\0'; // Adiciona o caractere nulo no final
	return (new_str);
}
