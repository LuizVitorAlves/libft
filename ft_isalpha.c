/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalves-d <lalves-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:31:04 by lalves-d          #+#    #+#             */
/*   Updated: 2024/09/25 16:44:33 by lalves-d         ###   ########.fr       */
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
#include<stdio.h>

int main() {
    char c = 'A';
    
    if (ft_isalpha(c)) {
        printf("%c it's a letter.\n", c);
    } else {
        printf("%c it's not a letter.\n", c);
    }
    
    return 0;
}
*/
