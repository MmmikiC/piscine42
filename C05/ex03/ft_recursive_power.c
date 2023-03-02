/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:10:32 by pichen            #+#    #+#             */
/*   Updated: 2023/02/22 10:08:19 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	ans;

	ans = 1;
	if (power < 0)
		return (0);
	if (power > 0)
	{
		ans = ans * nb * ft_recursive_power(nb, power - 1);
		power--;
	}
	return (ans);
}

/*int	main(void)
{
	int	nb;
	int	power;

	nb = 2;
	power = 7;
	printf("(%d)^%d = %d\n", nb, power, ft_recursive_power(nb, power));
	return (0);
}*/
