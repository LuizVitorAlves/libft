/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalves-d <lalves-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:19:49 by lalves-d          #+#    #+#             */
/*   Updated: 2024/10/12 15:13:58 by lalves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	total_size;
	void	*ptr;
	char	*char_ptr;
	size_t	i;

	total_size = num * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	char_ptr = (char *)ptr;
	i = 0;
	while (i < total_size)
	{
		char_ptr[i] = 0;
		i++;
	}
	return (ptr);
}

/*
#include <stdio.h>

int main(void)
{
    char s[20] = "isso e um teste";
    char t[20] = "isso e um teste";

    bzero(s,2);
    ft_bzero(t,2);

    printf("Buffer contents in s[2]: %c\n",s[2]);
    printf("Buffer contents t[2]: %c\n",t[2]);

}*/
