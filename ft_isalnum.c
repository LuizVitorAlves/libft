/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalves-d <lalves-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:46:03 by lalves-d          #+#    #+#             */
/*   Updated: 2024/09/25 16:44:00 by lalves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Checks whether the character is in the group of numbers and letters or not.

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else if (c >= '0' && c <= '9')
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

int main()
{
    char c = '7';
    
    if (ft_isalnum(c)) {
        printf("%c it's a alnum.\n", c);
    } else {
        printf("%c it's not a alnum.\n", c);
    }
    
    return 0;
}
*/
