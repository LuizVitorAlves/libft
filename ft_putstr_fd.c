#include <unistd.h> // Para write
#include "libft.h" // Para a definição de ft_putstr_fd

/**
 * ft_putstr_fd - Escreve a string 's' no descritor de arquivo 'fd'
 * @s: A string a ser escrita.
 * @fd: O descritor de arquivo onde escrever.
 *
 * Retorna: None.
 */
void	ft_putstr_fd(char *s, int fd)
{
	// Verifica se a string é nula
	if (!s)
		return;
	// Usa write para escrever a string no descritor
	write(fd, s, ft_strlen(s)); 
}
