/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalves-d <lalves-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:40:12 by lalves-d          #+#    #+#             */
/*   Updated: 2024/10/12 15:16:43 by lalves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks whether the character is a number (0 to 9) or not.

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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
    char test = 'a';
    printf("result isdigit: %d\n", isdigit(test));
    printf("result isdigit: %d\n", ft_isdigit(test));
}*/
