/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalves-d <lalves-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:46:41 by lalves-d          #+#    #+#             */
/*   Updated: 2024/10/12 14:51:22 by lalves-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int		sign;
	long	result;
	int		i;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("using atoi: %i\n",atoi("45"));
    printf("using ft_atoi: %i\n",ft_atoi("45"));
    printf("using atoi: %i\n",atoi("   77"));
    printf("using ft_atoi: %i\n",ft_atoi("   77"));
    printf("using atoi: %i\n",atoi("   --99"));
    printf("using ft_atoi: %i\n",ft_atoi("   --99"));
    printf("using atoi: %i\n",atoi("  ++11"));
    printf("using ft_atoi: %i\n",ft_atoi("  ++11"));
    printf("using atoi: %i\n",atoi("   -25a4a"));
    printf("using ft_atoi: %i\n",ft_atoi("   -25a4a"));

    return 0;
}
*/
