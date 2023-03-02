/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:46:15 by pichen            #+#    #+#             */
/*   Updated: 2023/02/14 15:14:13 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	src[] = "Falling asleep QQ...";
	char	src1[] = "Falling asleep QQ...";
	char	dest[30];
	char	dest1[30];

	printf("Original: %s\ncopied: %s\n", src, ft_strcpy(dest, src));
	printf("Original: %s\ncopied: %s\n", src, strcpy(dest1, src1));
	return (0);
}
