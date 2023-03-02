/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:18:47 by pichen            #+#    #+#             */
/*   Updated: 2023/02/16 15:43:36 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	n;
	int	print_n;

	if (nb == -2147483648)
	{
		write (1, &"-2147483648", 11);
		return ;
	}
	n = nb;
	if (n < 0)
	{
		write (1, &"-", 1);
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	print_n = 48 + n % 10;
	write (1, &print_n, 1);
}

int	main(void)
{
	ft_putnbr(9);
	write (1, &"\n", 1);
	ft_putnbr(-9);
	write (1, &"\n", 1);
	ft_putnbr(0);
	write (1, &"\n", 1);
	ft_putnbr(42);
	write (1, &"\n", 1);
	ft_putnbr(-42);
	write (1, &"\n", 1);
	ft_putnbr(142);
	write (1, &"\n", 1);
	ft_putnbr(-142);
	write (1, &"\n", 1);
	ft_putnbr(2147483647);
	write (1, &"\n", 1);
	ft_putnbr(147483648);
	write (1, &"\n", 1);
	ft_putnbr(-2147483648);
	write (1, &"\n", 1);
	return (0);
}
