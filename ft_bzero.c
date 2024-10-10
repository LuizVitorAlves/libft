/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalves-d <lalves-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:58:02 by lalves-d          #+#    #+#             */
/*   Updated: 2024/10/10 14:01:30 by lalves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Used to fill a memory area with zeros.

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	*ptr = (unsigned char *)s;
	while (n-- > 0)
	{
		*ptr++ = 0;
	}
}
