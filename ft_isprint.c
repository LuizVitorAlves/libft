/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalves-d <lalves-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:49:12 by lalves-d          #+#    #+#             */
/*   Updated: 2024/09/25 16:49:29 by lalves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Check if it is printable or not.

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
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
    char c = '7';
    
    if (ft_isprint(c)) {
        printf("%c it's printable.\n", c);
    } else {
        printf("%c it's not printable.\n", c);
    }
    
    return 0;
}
*/
