/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:08:43 by pichen            #+#    #+#             */
/*   Updated: 2023/02/16 12:37:46 by pichen           ###   ########.fr       */
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
