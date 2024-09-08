/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 14:33:47 by mawako            #+#    #+#             */
/*   Updated: 2024/09/07 12:32:42 by mawako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return;
	size_t	i;
	size_t	count;

	count = ft_strlen(s);
	i = 0;
	while (count--)
		ft_putchar_fd(s[i++], fd);
	return;
}
