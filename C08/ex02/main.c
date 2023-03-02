/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:28:05 by pichen            #+#    #+#             */
/*   Updated: 2023/02/28 13:21:50 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdio.h>

int	main(void)
{
	int	nbr;
	int	nb;

	nbr = -5;
	nb = nbr;
	while (nb <= 0)
	{
		printf("nbr: %d\n", nb);
		//ABS(nb);
		printf("nbr: %d\n", ABS(nb));
		nb++;
	}
	return (0);
}

/*int	main(void)
{
	int	index;

	index = -5;
	while (index < 5)
	{
		printf("macros::abs(%d) = %d\n", index, ABS(index));
		index++;
	}
}*/
