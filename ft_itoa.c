#include <stdlib.h> // Para malloc e NULL
#include "libft.h" // Para ft_strlen

/**
 * get_length - Obtém o comprimento necessário para armazenar o número como string
 * @n: O número a ser convertido.
 *
 * Retorna o comprimento necessário.
 */
static int	get_length(int n)
{
	int	length;

	// Considera o sinal do número
	length = (n <= 0) ? 1 : 0;
	while (n)
	{
		n /= 10; // Divide por 10 para contar os dígitos
		length++;
	}
	return (length);
}

/**
 * ft_itoa - Converte um número inteiro em uma string
 * @n: O número a ser convertido.
 *
 * Retorna a string representando o número, ou NULL se a alocação falhar.
 */
char	*ft_itoa(int n)
{
	char	*str;
	int		length;
	unsigned int	num;

	// Obtém o comprimento necessário para a string
	length = get_length(n);
	// Aloca memória para a string
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (!str)
		return (NULL);
	str[length] = '\0'; // Adiciona o caractere nulo
	num = (n < 0) ? -n : n; // Converte para positivo se necessário
	if (n < 0)
		str[0] = '-'; // Adiciona o sinal negativo
	while (length-- > (n < 0)) // Enquanto não chegar ao início da string
	{
		str[length] = (num % 10) + '0'; // Converte o dígito para char
		num /= 10; // Remove o dígito
	}
	return (str);
}
