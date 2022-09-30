/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuin <mjuin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:01:35 by mjuin             #+#    #+#             */
/*   Updated: 2022/09/30 09:54:59 by mjuin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size;
	int		pos;
	char	*str;

	size = ft_strlen(s1) + ft_strlen(s2);
	str = malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	pos = 0;
	while (*s1 != '\0')
		str[pos++] = *s1++;
	while (*s2 != '\0')
		str[pos++] = *s2++;
	str[pos] = 0;
	return (str);
}
