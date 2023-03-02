/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 13:10:26 by pichen            #+#    #+#             */
/*   Updated: 2023/02/26 17:09:12 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] < '0' || (base[i] > '9' && base[i] < 'A')
			|| (base[i] > 'Z' && base[i] < 'a') || base[i] > 'z')
			return (0);
		j = 0;
		while (j < i)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

long int	count_to_ten_base(char *nbr, char *base_from, int i)
{
	long int	nbr_int;
	int	j;

	nbr_int = 0;
	while (nbr[i] != '\0')
	{
		j = 0;
		while (j < check_base(base_from))
		{
			if (nbr[i] == base_from[j])
			{
				nbr_int = nbr_int * check_base(base_from) + j;
				break ;
			}
			j++;
		}
		i++;
	}
	return (nbr_int);
}

int	ft_atoi_base(char *nbr, char *base_from)
{
	long int	nbr_int;
	int	i;
	int	check_pn;

	i = 0;
	check_pn = 1;
	while ((nbr[i] >= 9 && nbr[i] <= 13) || nbr[i] == ' ')
		i++;
	while (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			check_pn *= -1;
		i++;
	}
	nbr_int = count_to_ten_base(nbr, base_from, i);
	return (nbr_int * check_pn);
}

char	*ft_putnbr_base(long int nbr, char *base_to, int len)
{
	int		i;
	int		base_len;
	char	*str;

	i = 0;
	base_len = check_base(base_to);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (nbr < 0)
	{
		nbr = -nbr;
		str[i++] = '-';
	}
	while (nbr >= base_len)
	{
		str[len - 1] = base_to[nbr % base_len];
		nbr /= base_len;
		len--;
	}
	if (nbr < base_len)
		str[len - 1] = base_to[nbr];
	return (str);
}

int	ft_len(long int nbr_int, char *base_to, int len)
{
	int	base_len;
	long int	nb;

	base_len = check_base(base_to);
	if (nbr_int < 0)
	{
		nb = nbr_int * -1;
		len++;
	}
	else
		nb = nbr_int;
	while (nb >= base_len)
	{
		nb /= base_len;
		len++;
	}
	len++;
	return (len);
}
