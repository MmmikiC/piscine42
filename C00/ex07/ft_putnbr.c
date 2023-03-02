/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:18:47 by pichen            #+#    #+#             */
/*   Updated: 2023/02/27 16:45:13 by pichen           ###   ########.fr       */
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