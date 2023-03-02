/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 10:59:50 by pichen            #+#    #+#             */
/*   Updated: 2023/02/23 10:02:09 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	i;

	if (max <= min)
		return (0);
	a = (int *) malloc(sizeof(int) * max - min);
	i = 0;
	if (a == 0)
		return (0);
	while (i < max - min)
	{
		a[i] = min + i;
		i++;
	}
	return (a);
}

/*int	main(void)
{
	int	*a;
	int	min;
	int	max;
	int	i;

	min = 1;
	max = 5;
	i = 0;
	a = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d", a[i]);
		if (i < max - min - 1)
			printf(", ");
		i++;
	}
	return (0);
}*/
