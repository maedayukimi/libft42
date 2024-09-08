/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawako <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 07:16:21 by mawako            #+#    #+#             */
/*   Updated: 2024/08/27 07:34:49 by mawako           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (NULL);
	char	*src;

	src = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!src)
		return (NULL);
	ft_strlcpy(src, s1, ft_strlen(s1) + 1);
	ft_strlcat(src, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (src);
}
