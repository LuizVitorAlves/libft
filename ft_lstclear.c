//Bonus
#include <stdlib.h> // Necessário para usar free

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *temp;

    while (*lst) // Percorre todos os nós da lista.
    {
        temp = (*lst)->next;  // Armazena o próximo nó.
        ft_lstdelone(*lst, del); // Libera o nó atual.
        *lst = temp;  // Avança para o próximo nó.
    }
    *lst = NULL; // Garante que o ponteiro da lista aponta para NULL.
}
