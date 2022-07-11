/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee2 <salee2n@student.42seoul.k>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 13:12:30 by salee2            #+#    #+#             */
/*   Updated: 2022/07/11 15:09:19 by salee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	isspace(int c)
{
	if ((9 <= c && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	size_t			i;
	int				sign;
	unsigned int	acc;

	i = 0;
	sign = 1;
	while (isspace(str[i]))
		++i;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		++i;
	}
	acc = 0;
	while (ft_isdigit(str[i]))
	{
		acc = acc * 10 + str[i] - '0';
		if (sign == 1 && acc > 0x7fffffff)
			return (-1);
		else if (sign == -1 && acc > 0x80000000)
			return (0);
		++i;
	}
	return ((int)(sign * acc));
}
