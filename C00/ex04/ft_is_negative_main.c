/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:32:24 by pichen            #+#    #+#             */
/*   Updated: 2023/02/11 21:20:42 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write (1, &"N", 1);
	else
		write (1, &"P", 1);
}

int	main(void)
{
	ft_is_negative(NULL);
	return (0);
}
