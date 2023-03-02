/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:20:41 by pichen            #+#    #+#             */
/*   Updated: 2023/02/16 15:44:26 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long int	num;
	int			print_num;

	num = nb;
	if (num < 0)
	{
		write (1, "-", 1);
		num = -num;
	}
	if (num > 9)
	{
		ft_putnbr(num / 10);
	}
	print_num = '0' + num % 10;
	write(1, &print_num, 1);
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
