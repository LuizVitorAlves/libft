//Bonus
void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (lst && new) // Verifica se os ponteiros fornecidos são válidos.
    {
        // Faz o novo nó apontar para o início atual da lista.
        new->next = *lst;
        // Atualiza o ponteiro de início da lista para o novo nó.
        *lst = new;
    }
}
