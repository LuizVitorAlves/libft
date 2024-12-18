/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalves-d <lalves-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:08:04 by lalves-d          #+#    #+#             */
/*   Updated: 2024/10/12 15:25:58 by lalves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	d_len = 0;
	s_len = 0;
	i = 0;
	while (dst[d_len] && d_len < dstsize)
		d_len++;
	while (src[s_len])
		s_len++;
	if (d_len == dstsize)
		return (dstsize + s_len);
	while (src[i] && (d_len + i) < (dstsize - 1))
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	return (d_len + s_len);
}

/*
int main(void)
{
    char dst[20] =  "This";
    const char *src = " is a test";
	char dst2[20] =  "This";
    const char *src2 = " is a test";
	strlcat(dst,src,7);
	ft_strlcat(dst2,src2,7);
	printf("%s\n", dst);
	printf("%s\n", dst2);
    //printf("using strlcat: %li\n", strlcat(dst,src,7));
    //printf("using ft_strlcat: %i\n", ft_strlcat(dst,src,7));
}
*/
