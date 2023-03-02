/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 11:07:00 by pichen            #+#    #+#             */
/*   Updated: 2023/02/19 16:20:45 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && (s1[0] != '\0' || s2[0] != '\0'))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(void)
{
	char	s1[] = "aabbc";
	char	s2[] = "aabbd";

	printf("s1: \"%s\", s2: \"%s\"\n", s1, s2);
	printf("strcmp in string.h\n");
	printf("%d\n", strcmp(s1, s2));
	printf("\n");
	printf("ft_strcmp written by myself:\n");
	printf("%d\n", ft_strcmp(s1, s2));
}
