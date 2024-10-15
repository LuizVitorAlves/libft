/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalves-d <lalves-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:49:12 by lalves-d          #+#    #+#             */
/*   Updated: 2024/10/12 15:17:20 by lalves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Check if it is printable or not.

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
    printf("testing with isprint(): %d\n",ft_isprint('a'));
    printf("testing with isprint(): %d\n",ft_isprint('\n'));
    printf("testing with isprint(): %d\n",ft_isprint('\t'));
    printf("testing with isprint(): %d\n",ft_isprint('6'));
}*/
