t_list *ft_lstlast(t_list *lst)
{
    if (!lst) // Se a lista estiver vazia, retorna NULL.
        return (NULL);
    
    // Percorre a lista até encontrar o último nó (onde next é NULL).
    while (lst->next)
        lst = lst->next;

    return (lst); // Retorna o último nó.
}
