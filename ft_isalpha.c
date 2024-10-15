/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalves-d <lalves-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:31:04 by lalves-d          #+#    #+#             */
/*   Updated: 2024/10/12 15:15:03 by lalves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//checks whether a character is an alphabet (a to z and A to Z) or not.

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
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
    int test = 'a';

    printf("result of isalpha: %d\n", isalpha(test));
    printf("result of ft_isalpha: %d\n", ft_isalpha(test));
}*/
