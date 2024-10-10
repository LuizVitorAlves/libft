/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalves-d <lalves-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:49:36 by lalves-d          #+#    #+#             */
/*   Updated: 2024/10/10 13:51:42 by lalves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//Used to fill memory with a specific value.

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	*ptr = (unsigned char *) b;
	while (len--)
	{
		*ptr++ = (unsigned char)c;
	}
	return (b);
}
