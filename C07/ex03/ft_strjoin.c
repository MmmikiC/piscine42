/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:24:24 by pichen            #+#    #+#             */
/*   Updated: 2023/02/28 16:48:51 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	count_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	count_total_len(int size, char **strs, int sep_len)
{
	int	total_len;
	int	i;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += (count_len(strs[i]) + sep_len);
		i++;
	}
	total_len -= sep_len;
	return (total_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*a;
	int		i;
	int		j;
	int		k;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	a = (char *)malloc(sizeof(char)
			* (count_total_len(size, strs, count_len(sep)) + 1));
	if (a == 0)
		return (0);
	i = -1;
	j = -1;
	while (++i < size)
	{
		k = -1;
		while (strs[i][++k] != '\0')
			a[++j] = strs[i][k];
		k = -1;
		while (i < size - 1 && sep[++k] != '\0')
			a[++j] = sep[k];
	}
	a[++j] = '\0';
	return (a);
}

/*int	main(void)
{
	char	**strs;
	char	*sep = "/";
	int	size = 4;
	char	*a;
	int	i;

	strs = (char **)malloc(sizeof(char) * size);
	strs[0] = (char *)malloc(sizeof(char) * 2);
	strs[1] = (char *)malloc(sizeof(char) * 3);
	strs[2] = (char *)malloc(sizeof(char) * 3);
	strs[3] = (char *)malloc(sizeof(char) * 8);
	strs[0] = "I";
	strs[1] = "am";
	strs[2] = "in";
	strs[3] = "42Tokyo";
	a = ft_strjoin(size, strs, sep);
	i = 0;
	printf("%s\n", a);
	free(a);
	return (0);
}*/
