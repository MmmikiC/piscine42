/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichen <pichen@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 12:32:24 by pichen            #+#    #+#             */
/*   Updated: 2023/02/27 13:17:49 by pichen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

void	ft_putstr(char *str);

typedef enum t_bool{
	false = 0,
	true = 1,
}	t_bool;

# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 0
# define FALSE false
# define TRUE true
# define EVEN(num) (num % 2 == 0)

#endif
