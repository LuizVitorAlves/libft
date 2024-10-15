/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalves-d <lalves-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:36:27 by lalves-d          #+#    #+#             */
/*   Updated: 2024/10/12 15:19:40 by lalves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*p1 != *p2)
			return ((*p1 - *p2));
		p1++;
		p2++;
	}
	return (0);
}

/*
int main()
{
	char *str1 = "Hellu";
    char *str2 = "Hello";

    printf("using memcmp: %i\n", memcmp(str1, str2, 6));
    printf("using ft_memcmp: %zu\n", ft_memcmp(str1, str2, 6));
    return (0);
}*/
