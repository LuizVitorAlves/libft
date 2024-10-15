/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalves-d <lalves-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:58:02 by lalves-d          #+#    #+#             */
/*   Updated: 2024/10/12 15:12:48 by lalves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Used to fill a memory area with zeros.

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n-- > 0)
	{
		*ptr++ = 0;
	}
}

/*
#include <stdio.h>

int main(void)
{
    char s[20] = "isso e um teste";
    char t[20] = "isso e um teste";

    bzero(s,2);
    ft_bzero(t,2);

    printf("Buffer contents in s[2]: %c\n",s[2]);
    printf("Buffer contents t[2]: %c\n",t[2]);

}*/
