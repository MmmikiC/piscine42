/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:57:26 by pichen            #+#    #+#             */
/*   Updated: 2023/02/16 13:57:53 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;
	unsigned int	count_size;

	dest_len = 0;
	src_len = 0;
	i = 0;
	count_size = 0;
	while (dest[i++] != '\0')
		dest_len++;
	i = 0;
	while (src[i++] != '\0')
		src_len++;
	if (size == 0 || size <= dest_len)
		return (size + src_len);
	i = 0;
	while (count_size < size - dest_len - 1 && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
		count_size++;
	}
	return (dest_len + src_len);
}
