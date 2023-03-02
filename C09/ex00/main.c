/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:40:15 by pichen            #+#    #+#             */
/*   Updated: 2023/02/28 12:12:08 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_putchar(char c);
void ft_swap(int *a, int *b);
void ft_putstr(char *str);
int ft_strlen(char *str);
int ft_strcmp(char *s1, char *s2);

int	main(void)
{
	ft_putchar('a');
	ft_putchar('\n');
	int a = 4; int b = 2;
	printf("before swap, a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("after swap, a = %d, b = %d\n", a, b);
	char *str = "hahaha\n";
	ft_putstr(str);
	printf("length of %s: %d\n", str, ft_strlen(str));
	char *s1 = "abcd"; char *s2 = "abcc";
	printf("s1 = %s, s2 = %s, ft_strcmp(s1, s2) = %d\n", s1, s2, ft_strcmp(s1, s2));
	return (0);
}
