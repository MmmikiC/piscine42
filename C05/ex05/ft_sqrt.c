/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:34:47 by pichen            #+#    #+#             */
/*   Updated: 2023/02/28 19:38:06 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long int	ans;

	ans = 0;
	while (ans * ans <= nb)
	{
		if (ans * ans == nb)
			return (ans);
		ans++;
	}
	return (0);
}

/*int	main(void)
{
	long int	nb;

	nb = 2147483621;
	//nb = 2147483643;
	while (nb <= 2147483647)
	{
		printf("the square root of %ld = %d\n", nb, ft_sqrt(nb));
		nb++;
	}
	//printf("the square root of %d = %d\n", nb, ft_sqrt(nb));
	return (0);
}*/
