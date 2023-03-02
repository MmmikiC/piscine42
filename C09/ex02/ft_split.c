/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:05:11 by pichen            #+#    #+#             */
/*   Updated: 2023/03/02 11:16:48 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	check_sep(char c, char *charset)
{
	int	i;

	i = -1;
	while (charset[++i] != '\0')
	{
		if (c == charset[i])
			return (1);
	}
	return (0);
}

int	find_i(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && check_sep(str[i], charset) == 0)
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && check_sep(str[i], charset) == 1)
			i++;
	}
	return (count);
}

char	*put_into_a(char *str, char *charset)
{
	int		len;
	int		i;
	char	*word;

	len = 0;
	while (str[len] && check_sep(str[len], charset) == 0)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	i = -1;
	while (++i < len)
		word[i] = str[i];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**a;
	int		i;

	a = (char **)malloc(sizeof(char *) * (find_i(str, charset) + 1));
	i = 0;
	while (*str != '\0')
	{
		while (*str != '\0' && check_sep(*str, charset) == 1)
			str++;
		if (*str != '\0')
			a[i++] = put_into_a(str, charset);
		while (*str != '\0' && check_sep(*str, charset) == 0)
			str++;
	}
	a[i] = 0;
	return (a);
}

/*int	main(void)
{
	int		i;
	char	*str = "=/I/ am=/ in==/42=Tokyo";
	char	*charset = "==/";
	char	**a;

	a = ft_split(str, charset);
	i = 0;
	while (a[i])
	{
		printf("%s\n", a[i]);
		i++;
	}
	return (0);
}*/
