/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:04:55 by mjuin             #+#    #+#             */
/*   Updated: 2022/09/30 16:18:43 by mjuin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include "libft.h"

int	main (void)
{
	void	*mem;
	if (!(mem = malloc(sizeof(*mem) * 30)))
		return (0);
	strlcat(mem, NULL, 0);
	printf("%s", (char *)mem);
}
