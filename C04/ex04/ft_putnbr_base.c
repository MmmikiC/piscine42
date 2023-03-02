/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_main.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 16:18:32 by pichen            #+#    #+#             */
/*   Updated: 2023/02/16 21:03:30 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	check_pn(int nbr)
{
	if (nbr < 0)
	{
		nbr = -nbr;
		write (1, "-", 1);
	}
	return (nbr);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] < '0' || (base[i] > '9' && base[i] < 'A')
			|| (base[i] > 'Z' && base[i] < 'a') || base[i] > 'z')
			return ;
		j = 0;
		while (j++ < i)
		{
			if (base[i] == base[j - 1])
				return ;
		}
		i++;
	}
	if (i == 0 || i == 1)
		return ;
	nbr = check_pn(nbr);
	if (nbr > i)
		ft_putnbr_base(nbr / i, base);
	write (1, &base[nbr % i], 1);
}
