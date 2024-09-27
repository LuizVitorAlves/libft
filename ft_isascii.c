/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalves-d <lalves-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:57:46 by lalves-d          #+#    #+#             */
/*   Updated: 2024/09/25 16:46:40 by lalves-d         ###   ########.fr       */
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

int main() {
    char c = 'A';
    
    if (ft_isascii(c)) {
        printf("%c it's a ascii.\n", c);
    } else {
        printf("%c it's not a isascii.\n", c);
    }
    
    return 0;
}
*/
