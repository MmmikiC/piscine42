/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:08:04 by pichen            #+#    #+#             */
/*   Updated: 2023/02/13 12:49:53 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	a;
	int	b;
	int	d;
	int	m;

	a = 62;
	b = 20;
	ft_div_mod(a, b, &d, &m);
	printf("%d / %d = %d\n", a, b, d);
	printf("%d %% %d = %d\n", a, b, m);
	return (0);
}
