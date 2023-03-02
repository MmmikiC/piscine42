/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 19:58:43 by pichen            #+#    #+#             */
/*   Updated: 2023/02/14 13:17:01 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a[2];

	a[0] = -1;
	while (++a[0] <= 98)
	{
		a[1] = a[0];
		while (++a[1] <= 99)
		{
			ft_putchar(a[0] / 10 + '0');
			ft_putchar(a[0] % 10 + '0');
			write (1, " ", 1);
			ft_putchar(a[1] / 10 + '0');
			ft_putchar(a[1] % 10 + '0');
			if (a[0] != 98)
				write (1, ", ", 2);
		}
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
