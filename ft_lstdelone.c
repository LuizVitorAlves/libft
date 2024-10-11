//Bonus
#include <stdlib.h> // Necessário para usar free

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (lst && del) // Verifica se os ponteiros fornecidos são válidos.
    {
        del(lst->content); // Aplica a função del ao conteúdo do nó.
        free(lst);         // Libera a memória do nó.
    }
}
