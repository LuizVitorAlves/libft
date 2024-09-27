/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalves-d <lalves-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:49:36 by lalves-d          #+#    #+#             */
/*   Updated: 2024/09/27 12:35:41 by lalves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Used to fill memory with a specific value.

void	*ft_memset(void *b, int c, unsigned long len)
{
	unsigned char *ptr = (unsigned char *)b;

	while (len--)
	{
		*ptr++ = (unsigned char)c;
	}
	return (b);
}
/*
#include <stdio.h>

int main(void)
{
        unsigned char buffer[20];
        char *string;

        string = (char *) ft_memset(buffer, 'A', 10);
        printf("Array with A: %s", string);
        printf("\n");
        ft_memset(buffer+10, 'B', 4);
        printf("Array with B: %s", string);
        printf("\n");
        return (0);
}
*/
