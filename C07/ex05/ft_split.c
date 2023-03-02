/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 12:32:53 by pichen            #+#    #+#             */
/*   Updated: 2023/02/28 20:11:10 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	check_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	find_i(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && check_sep(str[i], charset) == 1)
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && check_sep(str[i], charset) == 0)
			i++;
	}
	return (count);
}

int	word_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && check_sep(str[i], charset) == 0)
		i++;
	return (i);
}

char	*put_into_a(char *str, char *charset)
{
	int		len;
	int		i;
	char	*word;

	len = word_len(str, charset);
	word = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
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
		while (*str && check_sep(*str, charset) == 0)
			str++;
	}
	a[i] = 0;
	return (a);
}

/*int	main(void)
{
	int		i;
	char	*str = "I/ am=/ in==/42=Tokyo";
	char	*charset = "==/";
	char	**a;

	a = ft_split(str, charset);
	i = 0;
	while (a[i])
	{
		printf("%s\n", a[i]);
		i++;
	}
}*/
