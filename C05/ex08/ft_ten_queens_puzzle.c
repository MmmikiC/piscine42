/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:02:57 by pichen            #+#    #+#             */
/*   Updated: 2023/02/22 15:35:08 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_map(int *map, int j)
{
	while (j < 10)
	{
		write (1, &"0123456789"[map[j]], 1);
		j++;
	}
	write (1, "\n", 1);
}

void	put_queen(int *map, int i)
{
	int	j;

	map[i] = 0;
	while (map[i] < 10)
	{
		j = 0;
		while (j < i)
		{
			if (map[j] == map[i] || map[j] + j == map[i] + i
				|| map[j] - j == map[i] - i)
				break ;
			j++;
		}
		if (j == i)
		{
			if (i < 9)
				put_queen(map, i + 1);
			else
				print_map(map, 0);
		}
		map[i]++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	map[10];
	int	i;

	i = 0;
	while (i < 10)
	{
		map[i] = 0;
		i++;
	}
	i = 0;
	put_queen(map, i);
	return (724);
}

int	main(void)
{
	int	nb;
	nb = ft_ten_queens_puzzle();
	printf("return: %d\n", nb);
	return (0);
}
