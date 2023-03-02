/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:18:08 by pichen            #+#    #+#             */
/*   Updated: 2023/02/16 20:55:24 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	check_n;

	check_n = 0;
	while ((*s1 != '\0' || *s2 != '\0') && check_n < n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		check_n++;
	}
	return (0);
}

int	main(void)
{
	char			s1[] = "aabbc";
	char			s2[] = "aasbd";
	unsigned int	n;

	n = 3;
	printf("s1: \"%s\", s2: \"%s\", n: \"%u\"\n", s1, s2, n);
	printf("strncmp in string.h:\n");
	printf("%d\n", strncmp(s1, s2, n));
	printf("ft_strncmp written by myself:\n");
	printf("%d\n", ft_strncmp(s1, s2, n));
}
