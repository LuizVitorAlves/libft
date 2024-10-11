/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalves-d <lalves-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 17:12:27 by lalves-d          #+#    #+#             */
/*   Updated: 2024/10/11 17:20:40 by lalves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_length(int n)
{
	int	length;

	length = (n <= 0) ? 1 : 0;
	while (n)
	{
		n /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		length;
	unsigned int	num;

	length = get_length(n);
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (!str)
		return (NULL);
	str[length] = '\0';
	num = (n < 0) ? -n : n;
	if (n < 0)
		str[0] = '-';
	while (length-- > (n < 0))
	{
		str[length] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
