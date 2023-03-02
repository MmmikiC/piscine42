/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:47:28 by pichen            #+#    #+#             */
/*   Updated: 2023/02/17 11:32:09 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	while (*src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	dest[50] = "I'm in ";
	char	src[50] = "42Tokyo";
	char	dest1[50] = "I'm in ";
	char	src1[50] = "42Tokyo";

	printf("strcat in string.h:\n");
	printf("dest: \"%s\", src: \"%s\"\n", dest, src);
	printf("After strcat: %s\n", strcat(dest, src));
	printf("\n");
	printf("ft_strcat written by myself:\n");	
	printf("dest1: \"%s\", src1: \"%s\"\n", dest1, src1);
	printf("After ft_strcat: %s\n", ft_strcat(dest1, src1));
	return (0);
}
