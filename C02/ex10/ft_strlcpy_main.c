/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:23:44 by pichen            #+#    #+#             */
/*   Updated: 2023/02/15 15:11:51 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				length;
	unsigned int	i;

	length = 0;
	i = 0;
	while (src[i] != '\0')
	{
		length++;
		i++;
	}
	i = 0;
	if (size != 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (length);
}

int	main(void)
{
	char	src[13] = "42tokyohahaha";
	char	dest[8];

	printf("dest size: %lu\n", sizeof(dest));// %lu: unsigned long
	ft_strlcpy(dest, src, sizeof(dest));
	printf("dest: %s\n", dest);
	return (0);
}
