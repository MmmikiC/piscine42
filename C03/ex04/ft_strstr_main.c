/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:08:43 by pichen            #+#    #+#             */
/*   Updated: 2023/02/16 12:30:35 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	check_f;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		check_f = 0;
		while (str[i + check_f] == to_find[check_f] && str[i + check_f] != '\0')
			check_f++;
		if (to_find[check_f] == '\0')
			return (str + i);
		i++;
	}
	return ("(null)");
}

int	main(void)
{
	char	str[] = "I'm in 42 42Tokyo hahaha";
	char	str1[] = "I'm in 42 42Tokyo hahaha";
	char	to_find[] = "42Tokyouu";

	printf("strstr in string.h:\n");
	printf("str: \"%s\", to_find: \"%s\"\n", str, to_find);
	printf("strstr: %s\n", strstr(str, to_find));
	printf("ft_strstr written by myself:\n");
	printf("str1: \"%s\", to_find: \"%s\"\n", str1, to_find);
	printf("ft_strstr: %s\n", strstr(str1, to_find));
	return (0);
}
