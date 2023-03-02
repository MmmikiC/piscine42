/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:57:19 by pichen            #+#    #+#             */
/*   Updated: 2023/02/22 10:04:29 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	ans;

	ans = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		ans = ans * nb;
		power--;
	}
	return (ans);
}

/*int	main(void)
{
	int	nb;
	int	power;

	nb = 2;
	power = 3;
	printf("(%d)^%d = %d\n", nb, power, ft_iterative_power(nb, power));
	return (0);
}*/
