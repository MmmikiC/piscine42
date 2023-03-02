/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 17:36:42 by pichen            #+#    #+#             */
/*   Updated: 2023/02/22 12:25:28 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	ans;

	ans = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (nb > 0)
	{
		ans = ans * nb;
		nb--;
	}
	return (ans);
}

/*int	main(void)
{
	int	n;

	n = 0;
	printf("%d! = %d\n", n, ft_iterative_factorial(n));
	return (0);
}*/
