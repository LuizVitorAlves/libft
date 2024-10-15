/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalves-d <lalves-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 17:12:27 by lalves-d          #+#    #+#             */
/*   Updated: 2024/10/12 15:18:27 by lalves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_length(int n)
{
	int	length;

	length = 0;
	if (n <= 0)
		length = 1;
	while (n)
	{
		n /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				length;
	unsigned int	num;

	length = get_length(n);
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (!str)
		return (NULL);
	str[length] = '\0';
	if (n < 0)
		num = -n;
	else
		num = n;
	if (n < 0)
		str[0] = '-';
	while (length-- > (n < 0))
	{
		str[length] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}

/*
#include <stdio.h>

int main(void)
{
	int n = -123456789;
    char *str = ft_itoa(n);
    printf("Integer: %d\n", n);
    printf("String: %s\n", str);
    free(str);
    return (0);
}*/
