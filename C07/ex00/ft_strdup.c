/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:33:02 by pichen            #+#    #+#             */
/*   Updated: 2023/02/25 12:34:38 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	if (*str == '\0')
		return (0);
	return (ft_strlen(str + 1) + 1);
}

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

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, src);
	return (ft_strcpy(dest, src));
}

/*int	main(void)
{
	char	str[20] = "I'm in 42Tokyo";
	char	*ret_ptr;

	ret_ptr = ft_strdup(str);
	printf("result of ft_strdup: %s\n", ret_ptr);
	printf("address of str: %p\n", str);
	printf("address of ret_ptr: %p\n", ret_ptr);
	ret_ptr = strdup(str);
	printf("result of strdup: %s\n", ret_ptr);
	printf("address of str: %p\n", str);
	printf("address of ret_ptr: %p\n", ret_ptr);
	return (0);
}*/
