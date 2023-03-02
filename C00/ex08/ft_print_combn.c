/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 10:54:44 by pichen            #+#    #+#             */
/*   Updated: 2023/02/12 12:11:41 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	n_equals_1(int n)
{
	int i;
	i = '1';
	while (i <= '9')
	{
		ft_putchar(i);
		if (i < '9')
			write (1, ", ", 2);
		i++;
	}
}

void	n_equals_2(int n)
{
	char	a[2];

	a[0] = '0';
	while (a[0] <= '8')
	{
		a[1] = a[0] + 1;
		while (a[1] <= '9')
		{
			ft_putchar(a[0]);
			ft_putchar(a[1]);
			if (a[0] != '8')
				write (1, ", ", 2);
			a[1]++;
		}
		a[0]++;
	}
}

void	n_equals_3(int n)
{
	char	a[3];
	int	i;
	
	a[0] = '0';
	while (a[0] <= '7')
	{
		a[1] = a[0] + 1;
		while (a[1] <= '8')
		{
			a[2] = a[1] + 1;
			while (a[2] <= '9')
			{
				//write (1, &a[0], 1);
				//write (1, &a[1], 1);
				//write (1, &a[2], 1);
				i = 0;
				while (i++ < n)
					write(1, &a[i], 1);
				if (a[0] != '7')
					write (1, &", ", 2);
				a[2] += 1;
			}
			a[1] += 1;
		}
		a[0] += 1;
	}
}

void	print_n(int n, int check_loop)
{
	int i;
	int	b;
	char	a[n];

	i = 0;
	while (i < n)
	{
		a[i] = '0';
		ft_putchar(a[1]);
		i++;
	}
	i = check_loop;
	while (a [i] <= '10' - n)
	{
		a[0] = check_loop;
		ft_putchar(a[0]);
		b = 0;
		while (b++ < n)
			ft_putchar(a[b]);
		a[b] +=1;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	check_loop;
	//int	i;
	//int	a[n];

	check_loop = 0;
	//i = 0;
	
	while (check_loop < n)
	{
		print_n(n, check_loop);
		check_loop++;
	}
		
}

int	main(void)
{
	//ft_print_combn(2);
	print_n(4, 1);
	return (0);
}
