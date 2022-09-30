/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:57:49 by mjuin             #+#    #+#             */
/*   Updated: 2022/09/30 19:35:07 by mjuin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*nstr;
	int		pos;
	int		size;

	size = ft_strlen(s) + 1;
	nstr = malloc(size * sizeof(char));
	if (!nstr)
		return (NULL);
	ft_bzero(nstr, size);
	pos = 0;
	while (s[pos])
	{
		nstr[pos] = f(pos, s[pos]);
		pos++;
	}
	nstr[pos] = '\0';
	return (nstr);
}
