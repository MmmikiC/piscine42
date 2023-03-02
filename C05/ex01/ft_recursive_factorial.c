/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:35:40 by pichen            #+#    #+#             */
/*   Updated: 2023/02/20 12:56:16 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	ans;

	ans = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		ans = ans * nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	return (ans);
}

/*int	main(void)
{
	int	n;

	n = 3;
	printf("%d! = %d\n", n, ft_recursive_factorial(n));
	return (0);
}*/
