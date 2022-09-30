/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 09:21:02 by mjuin             #+#    #+#             */
/*   Updated: 2022/09/29 12:25:44 by mjuin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_getnextword(char const *s, char c, int *start)
{
	int		count;
	char	*str;

	count = 0;
	while (s[*start + count] == c)
		count++;
	*start = *start + count;
	count = 0;
	while (s[*start + count] && s[*start + count] != c)
		count++;
	str = malloc ((count * sizeof(char)) + 1);
	count = 0;
	while (s[*start + count] && s[*start + count] != c)
	{
		str[count] = s[*start + count];
		count++;
	}
	str[count] = '\0';
	*start = *start + count;
	return (str);
}

static int	ft_wordcount(const char *s, char c)
{
	int	count;
	int	pos;

	count = 0;
	pos = 0;
	if (!s[pos])
		return (count);
	while (s[pos])
	{
		if (s[pos] == c && (pos > 0 && s[pos - 1] != c))
			count++;
		pos++;
	}
	if (pos > 0 && s[pos - 1] == c)
		return (count);
	return (count + 1);
}

char	**ft_split(char const *s, char c)
{
	int		start;
	char	**splited;
	int		count;
	int		count2;

	start = 0;
	count2 = 0;
	count = ft_wordcount(s, c);
	if (s[0] == '\0' || count == 0)
	{
		splited = malloc(sizeof(char *));
		splited[0] = 0;
		return (splited);
	}
	splited = malloc(((count + 1) * sizeof(char *)));
	if (!splited)
		return (NULL);
	while (count2 < count)
	{
		splited[count2] = ft_getnextword(s, c, &start);
		count2++;
	}
	splited[count2] = NULL;
	return (splited);
}
