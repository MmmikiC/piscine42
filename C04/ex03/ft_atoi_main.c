/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:49:29 by pichen            #+#    #+#             */
/*   Updated: 2023/02/16 21:02:04 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	num;
	int	check_pn;

	num = 0;
	check_pn = 1;
	while (*str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			check_pn = -1;
		else
			check_pn = 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = 10 * num + (*str - '0');
		str++;
	}
	return (num * check_pn);
}

int	main(int argc, char *argv[])
{
	//char	str[] = "   ---+--21474836aa1";

	//printf("atoi(%s): %d\n", str, atoi(str));
	printf("ft_atoi(%s): %d\n", argv[1], ft_atoi(argv[1]));
	return (0);
}
