/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 15:24:12 by mawako            #+#    #+#             */
/*   Updated: 2024/08/23 16:07:27 by mawako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *n)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while ((*n >= 9 && *n <= 13) || *n == 32)
		n++;
	while (*n == '+' || *n == '-')
	{
		if (*n == '-')
			sign *= -1;
		n++;
	}
	while (*n >= '0' && *n <= '9')
	{
		res = res * 10 + (*n - 48);
		n++;
	}
	return (res * sign);
}
