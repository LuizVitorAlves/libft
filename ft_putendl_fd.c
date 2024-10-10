#include <unistd.h> // Para write
#include "libft.h" // Para a definição de ft_putendl_fd

/**
 * ft_putendl_fd - Escreve a string 's' no descritor de arquivo 'fd' seguida de uma nova linha
 * @s: A string a ser escrita.
 * @fd: O descritor de arquivo onde escrever.
 *
 * Retorna: None.
 */
void	ft_putendl_fd(char *s, int fd)
{
	// Verifica se a string é nula
	if (!s)
		return;
	// Escreve a string
	ft_putstr_fd(s, fd);
	// Escreve uma nova linha
	ft_putchar_fd('\n', fd);
}
