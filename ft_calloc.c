//Aloca uma memoria e seta toda essa memoria para zero
//Passo 1: Calcular o tamanho da memória que deve ser alocada
//Passo 2: Alocar a memória
//Passo 3: Inicializar todos os bytes para zero

#include <stdlib.h>
#include <stddef.h>

void	*ft_calloc(size_t num, size_t size)
{
	size_t	total_size;
	void	*ptr;
	char	*char_ptr;
	size_t	i;

	total_size = num * size;

	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	char_ptr = (char *)ptr;
	i = 0;
	while (i < total_size)
	{
		char_ptr[i] = 0;
		i++;
	}
	return (ptr);
}
