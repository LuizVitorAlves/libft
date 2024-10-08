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

#include <stdio.h>

//Used to fill memory with a specific value.

void *ft_memset(void *b, int c, size_t len)
{
    //converter o ponteiro b para um ponteiro de tipo unsigned char.
    //Quero converter a memória byte por byte, e um unsigned char tem um tamanho de 1 byte
    unsigned char *ptr = (unsigned char *)b;

    
    while (len--)
    {
	//Coloca c no endereço de memória apontado por ptr
        *ptr++ = (unsigned char)c;
    }
    //Retorna b, agora apontado para área da memória preenchida.
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
