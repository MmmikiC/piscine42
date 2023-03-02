/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 16:08:22 by pichen            #+#    #+#             */
/*   Updated: 2023/02/27 17:01:50 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, &(*str), 1);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	int	n;
	int	print_n;

	if (nb == -2147483648)
	{
		write (1, &"-2147483648", 11);
		return ;
	}
	n = nb;
	if (n < 0)
	{
		write (1, &"-", 1);
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	print_n = 48 + n % 10;
	write (1, &print_n, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		write (1, "\n", 1);
		ft_putnbr(par[i].size);
		write (1, "\n", 1);
		ft_putstr(par[i].copy);
		write (1, "\n", 1);
		i++;
	}
}

t_stock_str	*ft_strs_to_tab(int ac, char **av);

/*int	main(int ac, char **av)
{
	ft_show_tab(ft_strs_to_tab(ac, av));
	return (0);
}*/
