#include "libft.h" // Para a definição de ft_striteri

/**
 * ft_striteri - Aplica uma função a cada caractere da string 's' com seu índice
 * @s: A string na qual iterar.
 * @f: A função a aplicar a cada caractere.
 *
 * Retorna: None.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	// Verifica se a string ou a função são nulas
	if (!s || !f)
		return;
	
	i = 0;
	// Aplica a função 'f' a cada caractere da string
	while (s[i])
	{
		f(i, &s[i]); // Chama a função passando o índice e um ponteiro para o caractere
		i++;
	}
}
