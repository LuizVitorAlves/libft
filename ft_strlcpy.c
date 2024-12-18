/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalves-d <lalves-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:55:37 by lalves-d          #+#    #+#             */
/*   Updated: 2024/10/12 15:26:29 by lalves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Copies a string to a buffer, respecting the size passed in the parameter.

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (destsize > 0)
	{
		while (src[i] != '\0' && i < (destsize - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

/*
int main(void)
{
    const char *src = "Vasco da Gama";
    char dst[20];

    printf("using strlcpy: %li\n", strlcpy(dst,src,2));
    printf("using ft_strlcpy: %i\n", ft_strlcpy(dst,src,2));
    return (0);
}*/
