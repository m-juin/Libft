/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcopy.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuin <mjuin@student.42angouleme.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:22:27 by mjuin             #+#    #+#             */
/*   Updated: 2022/11/08 21:25:26 by mjuin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_strcopy(char *dst, char *src)
{
	char	*tmp;
	int		dstpos;
	int		srcpos;
	int		globalpos;

	if (!dst || !src)
		return (NULL);
	dstpos = ft_strlen(dst);
	srcpos = ft_strlen(src);
	tmp = ft_calloc((dstpos + srcpos + 1), sizeof(char));
	if (!tmp)
		return (NULL);
	globalpos = 0;
	while (globalpos < dstpos + srcpos)
	{
		if (globalpos < dstpos)
			tmp[globalpos] = dst[globalpos];
		else
			tmp[globalpos] = src[globalpos - dstpos];
		globalpos++;
	}
	free(dst);
	return (tmp);
}
