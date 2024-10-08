//Transforms an uppercase character into a lowercase character.

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return (c + 32);
    }
    return (c);
}

#include <stdio.h>

int main(void)
{
    printf("Lowercase of 'A': %c\n", ft_tolower('A'));
    printf("Lowercase of 'Z': %c\n", ft_tolower('Z'));
    printf("Lowercase of 'a': %c\n", ft_tolower('a')); // Teste para uma letra minúscula
    printf("Non-letter character: %c\n", ft_tolower('1')); // Teste para um caractere não-letra

    return (0);
}
