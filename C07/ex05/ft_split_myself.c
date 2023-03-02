/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:36:24 by pichen            #+#    #+#             */
/*   Updated: 2023/02/26 13:05:39 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	find_i(char *str, char *charset)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == charset[j] && charset[j] != '\0')
			j++;
		if (charset[j] == '\0')
		{
			count++;
			i += j;
		}
		else
			i++;
	}
	printf("check count: %d\n", count + 1);//check
	return (count + 1);
}

void	put_into_a(char **a, char *str, char *charset, int i)
{
	int	k;
	int j;
	int record;

	k = 0;
	j = 0;
	record = 0;
	while (str[i + j] == charset[j] && charset[j] != '\0')
		j++;
	if (charset[j] == '\0')
	{
		printf("i : %d\n", i);
		*a = (char *)malloc(sizeof(char) * (i - record + 1));
		while (record < i)
		{
			*a[k++] = str[record++];
		}
		printf("%s\n", *a);
		*a[k] = '\0';
		a++;
		i += j;
		record = i;
		printf("record: %d\n", record);
	}
	else
		i++;
}
char	**ft_split(char *str, char *charset)
{
	char	**a;
	int		i;
	int		j;
	int		k;
	int		m;
	int		record;

	a = (char **)malloc(sizeof(char *)
			* (find_i(str, charset) + 1));
	i = 0;
	k = 0;
	i = 0;
	m = 0;
	record = i;
	while (str[i] != '\0')
	{
		j = 0;
		//pur_into_a(a, str, charset, i, record);
		while (str[i + j] == charset[j])
			j++;
		if (charset[j] == '\0')
		{
			printf("i : %d\n", i);//che
			a[m] = (char *)malloc(sizeof(char) * (i - record + 1));
			while (record < i)
				a[m][k++] = str[record++];
			printf("%s\n", a[m]);//che
			a[m][k] = '\0';
			m++;
			k = 0;
			i += j;
			record = i;
			printf("record: %d\n", record);//che
		}
		else
			i++;
	}
	return (a);
}

int	main(void)
{
	char	*str = "I/am/=in/=42/=Tokyo";
	char	*charset = "/=";
	char	**a;
	int	i = 0;
	int	j = 0;

	a = ft_split(str, charset);
	printf("%s\n", a[0]);
	printf("%s\n", a[1]);
	printf("%s\n", a[2]);
	printf("%s\n", a[3]);
	printf("%s\n", a[4]);
	//printf("%d\n", find_i(str, charset));
	//while ()
	//return (0);
}
