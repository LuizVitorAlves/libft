//Bonus

int ft_lstsize(t_list *lst)
{
    int count = 0;

    // Percorre a lista contando cada nó.
    while (lst)
    {
        count++;
        lst = lst->next; // Avança para o próximo nó.
    }

    return (count); // Retorna o número total de nós.
}
