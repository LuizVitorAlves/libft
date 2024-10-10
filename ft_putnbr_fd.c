#include <unistd.h> // Para write
#include "libft.h" // Para a definição de ft_putnbr_fd

/**
 * ft_putnbr_fd - Escreve o inteiro 'n' no descritor de arquivo 'fd'
 * @n: O inteiro a ser escrito.
 * @fd: O descritor de arquivo onde escrever.
 *
 * Retorna: None.
 */
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648) // O menor valor inteiro
	{
		ft_putstr_fd("-2147483648", fd); // Lida com o menor número inteiro
		return;
	}
	if (n < 0) // Lida com números negativos
	{
		ft_putchar_fd('-', fd); // Escreve o sinal negativo
		n = -n; // Torna 'n' positivo
	}
	if (n >= 10) // Se o número for maior ou igual a 10
		ft_putnbr_fd(n / 10, fd); // Chama recursivamente para dividir o número
	ft_putchar_fd((n % 10) + '0', fd); // Escreve o dígito final
}
