/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 19:28:45 by pichen            #+#    #+#             */
/*   Updated: 2023/02/26 17:09:36 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		check_base(char *base);
int		ft_atoi_base(char *nbr, char *base_from);
int		ft_len(int nbr_int, char *base_to, int len);
char	*ft_putnbr_base(int nbr, char *base_to, int len);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nbr_int;
	int		len;
	char	*str;

	if (check_base(base_from) == 0 || check_base(base_to) == 0)
		return (0);
	nbr_int = ft_atoi_base(nbr, base_from);
	len = ft_len(nbr_int, base_to, 0);
	str = (char *)malloc(sizeof(char) * (len + 1));
	str = ft_putnbr_base(nbr_int, base_to, len);
	str[len] = '\0';
	return (str);
}

int	main(void)
{
	char	*nbr = "-2147483648";
	char	*base_from = "0123456789";
	char	*base_to = "01";
	char	*str;
	//int	nb = -127;

	str = (char *)malloc(sizeof(char) * 100);
	printf("%s\n", ft_convert_base(nbr, base_from, base_to));
	//printf("%d\n", ft_atoi_base(nbr, "0123456789abcdef"));
	//printf("%d\n", nb);
	free(str);
	return (0);
}
