//Retorna a posição do ultima aparição do caractere solicitado

char *ft_strrchr(const char *s, int c)
{
    int i = 0;

    // Chegar ao final da string
    while (s[i] != '\0')
    {
        i++;
    }

    // Andar com a string de trás para frente até encontrar c (equivalente a ultima aparição)
    while (i >= 0)
    {
        if (s[i] == (char)c)
        {
            return (char *)&s[i];
        }
        i--;
    }

    // Se não encontrar o caractere, retorna NULL
    return NULL;
}


