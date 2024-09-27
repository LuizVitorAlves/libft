/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalves-d <lalves-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:40:12 by lalves-d          #+#    #+#             */
/*   Updated: 2024/09/25 16:47:09 by lalves-d         ###   ########.fr       */
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
#include<stdio.h>

int main() {
    char c = '7';
    
    if (ft_isdigit(c)) {
        printf("%c it's a digit.\n", c);
    } else {
        printf("%c it's not a digit.\n", c);
    }
    
    return 0;
}
*/
