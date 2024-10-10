#include <unistd.h> // Para write
#include "libft.h" // Para a definição de ft_putchar_fd

/**
 * ft_putchar_fd - Escreve o caractere 'c' no descritor de arquivo 'fd'
 * @c: O caractere a ser escrito.
 * @fd: O descritor de arquivo onde escrever.
 *
 * Retorna: None.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1); // Usa write para escrever o caractere no descritor
}
