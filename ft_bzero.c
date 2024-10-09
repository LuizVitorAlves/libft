//Preencher uma área da memória com zeros
//Recebo um ponteiro s para dizer onde vai começar a ser zerado
//Recebo um n para dizer quantos bites vãos er zerados

#include <stddef.h>

void ft_bzero(void *s, size_t n) {
    //Conversaão para unsigned char do ponteiro s
    //Para garantir que estamos trabalhando com 1 byte (menor tamanho de unidade de memória)
    //Para podermos manipular a memória byte a byte
    unsigned char *ptr = (unsigned char *)s;

    //Caso n seja maior do que 0, irá descer um numero.
    while (n-- > 0) {
        //Atribui o valor zero ao endereço de memória apontado.
        *ptr++ = 0;
    }
}
