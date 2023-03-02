/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:06:41 by pichen            #+#    #+#             */
/*   Updated: 2023/02/22 14:13:57 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_count_base(char *base)
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
		while (j++ < i)
		{
			if (base[i] == base[j - 1])
				return (0);
		}
		i++;
	}
	return (i);
}

int	check_positive_or_negative(char *str, int i)
{
	int	check_pn;

	check_pn = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			check_pn = -1;
		else
			check_pn = 1;
		i++;
	}
	return (check_pn);
}

int	count_to_ten_base(char *str, char *base, int i, int count_base)
{
	int	str_int;
	int	j;

	str_int = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < count_base)
		{
			if (str[i] == base[j])
			{
				str_int = str_int * count_base + j;
				break ;
			}
			j++;
		}
		i++;
	}
	return (str_int);
}

int	ft_atoi_base(char *str, char *base)
{
	int	str_int;
	int	count_base;
	int	i;
	int	j;
	int	check_pn;

	str_int = 0;
	count_base = ft_count_base(base);
	if (count_base == 0 || count_base == 1)
		return (0);
	i = 0;
	while (str[i] == ' ')
		i++;
	check_pn = check_positive_or_negative(str, i);
	str_int = count_to_ten_base(str, base, i, count_base);
	return (str_int * check_pn);
}

int	main(void)
{
	char	str[] = "   ---++--57";
	char	base[] = "0123456789ABCDEF";
	//char	str[] = "11111111";
	//char	base[] = "01";

	printf("return : %d\n", ft_atoi_base(str, base));
	return (0);
}
