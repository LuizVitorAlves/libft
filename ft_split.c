#include <stdlib.h> // Para malloc e NULL
#include "libft.h" // Para ft_strlen

/**
 * count_words - Conta o número de palavras na string 's' delimitadas por 'c'
 * @s: A string a ser analisada.
 * @c: O caractere delimitador.
 *
 * Retorna o número de palavras encontradas.
 */
static int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	// Percorre a string contando as palavras
	while (*s)
	{
		if (*s == c)
			in_word = 0; // Estamos fora de uma palavra
		else if (!in_word)
		{
			in_word = 1; // Estamos dentro de uma palavra
			count++; // Contabiliza uma nova palavra
		}
		s++;
	}
	return (count);
}

/**
 * get_word - Obtém uma palavra da string 's' delimitada por 'c'
 * @s: A string a ser analisada.
 * @c: O caractere delimitador.
 *
 * Retorna a nova palavra alocada.
 */
static char	*get_word(char const *s, char c)
{
	size_t	i;
	char	*word;

	// Conta quantos caracteres existem até o delimitador
	i = 0;
	while (s[i] && s[i] != c)
		i++;
	// Aloca memória para a nova palavra
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	// Copia os caracteres para a nova palavra
	strncpy(word, s, i);
	word[i] = '\0'; // Adiciona o caractere nulo
	return (word);
}

/**
 * ft_split - Divide a string 's' em palavras usando o delimitador 'c'
 * @s: A string a ser dividida.
 * @c: O caractere delimitador.
 *
 * Retorna um array de novas strings resultantes da divisão, ou NULL se a alocação falhar.
 */
char	**ft_split(char const *s, char c)
{
	char	**split;
	int		word_count;
	int		i;

	// Verifica se a string é nula
	if (!s)
		return (NULL);
	
	// Conta o número de palavras
	word_count = count_words(s, c);
	// Aloca memória para o array de strings
	split = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!split)
		return (NULL);
	
	i = 0;
	// Percorre a string original e preenche o array com palavras
	while (*s)
	{
		if (*s != c)
		{
			split[i++] = get_word(s, c);
			while (*s && *s != c) // Move para o próximo delimitador
				s++;
		}
		else
			s++; // Pula o delimitador
	}
	split[i] = NULL; // Adiciona um ponteiro nulo ao final do array
	return (split);
}
