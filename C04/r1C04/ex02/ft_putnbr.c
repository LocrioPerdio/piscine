/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paduarte <paduarte@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 10:43:57 by paduarte          #+#    #+#             */
/*   Updated: 2026/02/18 13:45:00 by paduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)

{
	long	l;

	l = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (l == -2147483648)
		write(1, "2147483648", 10);
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + 48);
	}
}
/*
int	main(void)
{
	ft_putnbr(2147483647);
	return (0);
}
*/
