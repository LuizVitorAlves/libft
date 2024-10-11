//Bonus
void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last_node;

    if (!lst || !new) // Verifica se os ponteiros fornecidos são válidos.
        return;
    
    if (*lst == NULL) // Se a lista estiver vazia, define o novo nó como o primeiro nó.
        *lst = new;
    else
    {
        // Encontra o último nó da lista.
        last_node = ft_lstlast(*lst);
        // Faz o último nó apontar para o novo nó.
        last_node->next = new;
    }
}
