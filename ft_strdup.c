//Copia uma string para um espaço alocado na memória
//Passo 1: Saber qual o tamanho da string que vai ser alocada
//Passo 2: Alocar a memoria da string (lembrando de incluir o '\0'
//Passo 3: Copiar a string e adicionar o '\0'

#include <stdlib.h>
#include <stddef.h>

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*newstr;

	i = 0;
	while (s[i])
		i++;
	copy = (char *)malloc((i + 1) * sizeof(char));
	if (!newstr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		newstr[i] = s[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
