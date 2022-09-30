/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:04:55 by mjuin             #+#    #+#             */
/*   Updated: 2022/09/30 19:40:32 by mjuin            ###   ########.fr       */
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
	char *s1 = "oh no not the empty string !";
        char *s2 = "";
        size_t max = 0;
        char *i1 = strnstr(s1, s2, max);
        char *i2 = ft_strnstr(s1, s2, max);
	printf("Base = %s\n", i1);
	printf("Reworked = %s", i2);
}
