/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:28:42 by pichen            #+#    #+#             */
/*   Updated: 2023/02/26 18:28:47 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count_len;

	count_len = 0;
	while (*str != '\0')
	{
		count_len++;
		str++;
	}
	return (count_len);
}
