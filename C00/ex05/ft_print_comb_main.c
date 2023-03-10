/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:49:31 by pichen            #+#    #+#             */
/*   Updated: 2023/02/12 12:19:22 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	a[3];

	a[0] = '0';
	while (a[0] <= '7')
	{
		a[1] = a[0] + 1;
		while (a[1] <= '8')
		{
			a[2] = a[1] + 1;
			while (a[2] <= '9')
			{
				write (1, &a[0], 1);
				write (1, &a[1], 1);
				write (1, &a[2], 1);
				if (a[0] != '7')
					write (1, &", ", 2);
				a[2] += 1;
			}
			a[1] += 1;
		}
		a[0] += 1;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
