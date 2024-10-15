/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalves-d <lalves-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:49:36 by lalves-d          #+#    #+#             */
/*   Updated: 2024/10/12 15:21:18 by lalves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//Used to fill memory with a specific value.

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) b;
	while (len--)
	{
		*ptr++ = (unsigned char)c;
	}
	return (b);
}

/*
int main(void)
{
    char str1[15] = "hello world";
    char str2[15] = "hello world";

    printf("\n String before: %s\n", str1);
    memset(str1, 'B', 3);
    ft_memset(str2, 'B', 3);


    printf("\nUsing memset: %s\n", str1);
    printf("\nUsing ft_memset: %s\n", str2);
}*/
