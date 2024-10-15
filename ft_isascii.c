/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalves-d <lalves-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:57:46 by lalves-d          #+#    #+#             */
/*   Updated: 2024/10/12 15:16:03 by lalves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks whether the character is in the ASCII table.

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*
#include <stdio.h>
#include <ctype.h>
int main(void)
{
    printf("testing with isascii %d\n",isascii('é'));
    printf("testing with isascii %d\n",ft_isascii('é'));
    printf("testing with isascii %d\n",isascii('2'));
    printf("testing with isascii %d\n",ft_isascii('2'));
    printf("testing with isascii %d\n",isascii('A'));
    printf("testing with isascii %d\n",ft_isascii('A'));
    printf("testing with isascii %d\n",isascii('§'));
    printf("testing with isascii %d\n",ft_isascii('§'));
}*/
