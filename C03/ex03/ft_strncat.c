/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:57:20 by pichen            #+#    #+#             */
/*   Updated: 2023/02/16 12:06:51 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	check_nb;

	i = 0;
	check_nb = 0;
	while (dest[i] != '\0')
		i++;
	while (check_nb < nb && *src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
		check_nb++;
	}
	dest[i] = '\0';
	return (dest);
}
