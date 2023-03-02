/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:44:27 by pichen            #+#    #+#             */
/*   Updated: 2023/02/22 13:33:01 by pichen           ###   ########.fr       */
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
	if (nb == 2 || nb == 3)
		return (1);
	while (i <= ans)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	int	nb;

	//nb = 2147483646;
	nb = 37;
	printf("%d: %d\n", nb, ft_is_prime(nb));
	//while (nb >= 2147483500)
	//{
	//	printf("%d: %d\n", nb, ft_is_prime(nb));
	//	nb--;
	//}
	return (0);
}*/
