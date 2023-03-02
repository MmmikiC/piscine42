/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:52:43 by pichen            #+#    #+#             */
/*   Updated: 2023/02/13 11:34:33 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	printf("before swap\na: %d\nb: %d\n", a, b);
	ft_swap(&a, &b);
	printf("after swap\na: %d\nb: %d\n", a, b);
	return (0);
}
