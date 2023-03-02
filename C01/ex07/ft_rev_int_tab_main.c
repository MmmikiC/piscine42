/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab_main.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:16:14 by pichen            #+#    #+#             */
/*   Updated: 2023/02/13 12:50:33 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	head;
	int	back;
	int	time;
	int	temp;

	head = 0;
	back = size - 1;
	time = 0;
	while (time < size / 2)
	{
		temp = tab[head];
		tab[head] = tab[back];
		tab[back] = temp;
		time++;
		head++;
		back--;
		if (head == back)
			return ;
	}
}

int	main(void)
{
	/*
	int	tab[5] = {1, 2, 3, 4, 5};
	printf("%d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	ft_rev_int_tab(tab, 5);
	printf("%d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	*/

	int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9]);
	ft_rev_int_tab(tab, 10);
	printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9]);
	return (0);
}
