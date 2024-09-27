/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalves-d <lalves-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:30:40 by lalves-d          #+#    #+#             */
/*   Updated: 2024/09/27 11:48:18 by lalves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Count the number of characters in a string.

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	char	new[] = "42 Rio";

	printf("%d", ft_strlen(new));
	return (0);
}
*/
