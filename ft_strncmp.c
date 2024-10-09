//Compara duas strings até encontrar uma diferença entre elas

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i = 0;

    // Anda com as uas strings enquanto i < n e os caracteres forem iguais
    while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
    {
        if (s1[i] != s2[i])
        {
            // Caso sejam diferentes, retornará a diferença entre eles
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        }
        i++;
    }

    // Retorna 0 se as strings forem totalmente iguais
    return 0;
}
