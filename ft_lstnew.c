#include <stdlib.h> // Necessário para usar malloc

//bonus

t_list *ft_lstnew(void *content)
{
    t_list *new_node;

    // Aloca memória para um novo nó.
    new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node) // Verifica se a alocação foi bem-sucedida.
        return (NULL);
    
    // Inicializa o conteúdo do nó com o valor fornecido.
    new_node->content = content;
    // Define o ponteiro para o próximo nó como NULL, pois é o único nó no momento.
    new_node->next = NULL;
    
    return (new_node); // Retorna o nó recém-criado.
}
