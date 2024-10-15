/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalves-d <lalves-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:37:06 by lalves-d          #+#    #+#             */
/*   Updated: 2024/10/12 15:20:52 by lalves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Copies a memory area from one location to another.

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d == s)
		return (dst);
	if (d > s)
	{
		while (len--)
			d[len] = s[len];
	}
	else
	{
		while (len--)
			*d++ = *s++;
	}
	return (dst);
}

/*
int main(void)
{

    char str[] = "abcdef";

	char str_a[12] = "";
    char str_b[12] = "";

	printf("Original string src :%s %p\n", str, &str);
	printf("Original string src :%s %p\n\n", str_a, &str_a);

    memmove(str_a , str, 5);
    ft_memmove(str_b, str, 5);

    printf("memmove   string : %s %p\n", str_a, &str_a);
    printf("ft_memcpy string : %s %p\n", str_b, &str_b);
}*/
