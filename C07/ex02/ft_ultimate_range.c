/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:35:21 by pichen            #+#    #+#             */
/*   Updated: 2023/02/26 15:09:40 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*a;
	int	*buffer;
	int	i;

	if (max <= min)
		return (0);
	buffer = (int *)malloc(sizeof(int) * max - min);
	a = buffer;
	if (a == 0)
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	*range = buffer;
	while (i < max - min)
	{
		buffer[i] = min + i;
		i++;
	}
	return (max - min);
}

/*int	main(void)
{
	int	min;
	int	max;
	int	*a;
	int	size;
	int	i;

	min = 1;
	max = 5;
	size = ft_ultimate_range(&a, min, max);
	i = 0;
	while (i < size)
	{
		printf("%d", a[i]);
		if (i < size - 1)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}*/
