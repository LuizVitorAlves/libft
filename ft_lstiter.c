//Bonus

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    while (lst) // Percorre todos os nós da lista.
    {
        f(lst->content); // Aplica a função f ao conteúdo do nó.
        lst = lst->next; // Avança para o próximo nó.
    }
}
