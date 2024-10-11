//Bonus
#include <stdlib.h> // Necessário para usar malloc e free

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_list = NULL;
    t_list *new_node;

    while (lst) // Percorre todos os nós da lista original.
    {
        // Cria um novo nó aplicando a função f ao conteúdo do nó atual.
        new_node = ft_lstnew(f(lst->content));
        if (!new_node) // Se a alocação falhar, limpa a nova lista e retorna NULL.
        {
            ft_lstclear(&new_list, del);
            return (NULL);
        }
        ft_lstadd_back(&new_list, new_node); // Adiciona o novo nó ao final da nova lista.
        lst = lst->next; // Avança para o próximo nó da lista original.
    }
    return (new_list); // Retorna a nova lista.
}
