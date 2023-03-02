/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:11:09 by pichen            #+#    #+#             */
/*   Updated: 2023/02/13 12:15:09 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count_len;

	count_len = 0;
	while (*str != '\0')
	{
		count_len++;
		str++;
	}
	return (count_len);
}

int	main(void)
{
	printf("%d\n", ft_strlen("maybe 7"));
	return (0);
}
