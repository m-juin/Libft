/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:40:11 by mjuin             #+#    #+#             */
/*   Updated: 2022/09/28 12:09:48 by mjuin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*tmp;
	int		i;

	tmp = (char *)s;
	i = -1;
	c = c % 256;
	while (tmp[++i])
		if (tmp[i] == c)
			return (tmp + i);
	if (c == 0 && tmp[i] == 0)
		return (tmp + i);
	return (0);
}
