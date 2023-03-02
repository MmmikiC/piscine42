/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 14:02:55 by pichen            #+#    #+#             */
/*   Updated: 2023/02/16 14:14:31 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	//char	str[] = "I'm in 42Tokyo";
	char	str[] = "";
	printf("str: %s", str);
	printf("strlen in string:\n");
	printf("return of strlen: %lu\n", strlen(str));
	printf("\n");
	printf("ft_strlen written by myself:\n");
	printf("return of ft_strlen: %d\n", ft_strlen(str));
	return (0);
}
