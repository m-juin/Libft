/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuin <mjuin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:01:35 by mjuin             #+#    #+#             */
/*   Updated: 2022/09/30 00:06:26 by arakinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // replace by libft.h
#include <string.h> // remove

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	size;
	int	pos;
	char	*str;

	size = strlen(s1) + strlen(s2); // replace by ft_strlen
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
