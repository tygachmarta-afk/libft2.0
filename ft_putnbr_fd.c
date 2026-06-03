/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtyhach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 13:55:02 by mtyhach           #+#    #+#             */
/*   Updated: 2026/06/03 13:57:47 by mtyhach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd((nb % 10) + '0', fd);
}
/*int main(void)
{
    ft_putnbr_fd(42, 1);
    write(1, "\n", 1);

    ft_putnbr_fd(-42, 1);
    write(1, "\n", 1);

    ft_putnbr_fd(0, 1);
    write(1, "\n", 1);

    ft_putnbr_fd(2147483647, 1);
    write(1, "\n", 1);

    ft_putnbr_fd(-2147483648, 1);
    write(1, "\n", 1);

    return (0);
}*/