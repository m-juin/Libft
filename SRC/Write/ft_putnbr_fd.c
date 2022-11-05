/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 14:47:58 by mjuin             #+#    #+#             */
/*   Updated: 2022/10/12 12:38:47 by mjuin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

size_t	ft_putnbr_fd(int n, int fd)
{
	char	printer;
	size_t	size;

	printer = 0;
	size = 0;
<<<<<<< HEAD:SRC/Write/ft_putnbr_fd.c
	if (n == -2147483648)
=======
	if (n == INT_MIN)
>>>>>>> 2622c13091b25a12df80091afa94a1b3d7264cf0:ft_putnbr_fd.c
		size += ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			size += ft_putchar_fd('-', fd);
			n *= -1;
		}
		if (n > 9)
			size += ft_putnbr_fd((n / 10), fd);
		printer = (n % 10) + 48;
		size += ft_putchar_fd(printer, fd);
	}
	return (size);
}
