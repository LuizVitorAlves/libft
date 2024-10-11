/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalves-d <lalves-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:30:03 by lalves-d          #+#    #+#             */
/*   Updated: 2024/10/11 18:41:58 by lalves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Searches for the first occurrence of a substring within a string,
// within a limited number of characters.

char	*ft_strnstr(const char *str, const char *search, size_t len)
{
	size_t	search_len;

	search_len = 0;
	if (!*search)
		return ((char *)str);
	while (search[search_len])
		search_len++;
	while (len >= search_len && *str)
	{
		if (!ft_strncmp(str, search, search_len))
			return ((char *)str);
		str++;
		len--;
	}
	return (NULL);
}
