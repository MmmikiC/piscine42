/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab_main.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:16:14 by pichen            #+#    #+#             */
/*   Updated: 2023/02/13 13:24:22 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
