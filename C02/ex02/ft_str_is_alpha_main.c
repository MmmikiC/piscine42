/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha_main.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 19:44:14 by pichen            #+#    #+#             */
/*   Updated: 2023/02/14 09:43:38 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (*str < 'A' || (*str > 'Z' && *str < 'a') || *str > 'z')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int	main(void)
{
	char	*word;

	word = "asdf g";
	printf ("%s: %d\n", word, ft_str_is_alpha(word));
	return (0);
}
