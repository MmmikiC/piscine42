/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 14:48:10 by pichen            #+#    #+#             */
/*   Updated: 2023/02/21 13:03:16 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_sqrt(int nb)
{
	long int	ans;

	ans = 0;
	while (ans * ans <= nb)
	{
		if (ans * ans == nb)
			return (0);
		ans++;
	}
	return (ans);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	ans;

	i = 2;
	ans = check_sqrt(nb);
	if (nb <= 1 || ans == 0)
		return (0);
	while (i <= ans)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}

/*int	main(void)
{
	int	nb;

	nb = -2147483648;
	//nb = -111234;
	printf("%d, next prime: %d\n", nb, ft_find_next_prime(nb));
	return (0);
}*/
