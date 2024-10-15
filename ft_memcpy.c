/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalves-d <lalves-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:00:22 by lalves-d          #+#    #+#             */
/*   Updated: 2024/10/12 15:20:18 by lalves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Copiar uma área de memoria para outra

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}

/*
int main()
{
	char greeting1[5];
	char greeting2[5];

	memcpy(greeting1, "Hello, world!\n", 3);
	ft_memcpy(greeting2, "Hello, world!\n", 3);
	printf("%s\n",greeting1);
	printf("%s\n",greeting2);
}
*/
