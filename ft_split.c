/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee2 <salee2n@student.42seoul.k>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 19:13:20 by salee2            #+#    #+#             */
/*   Updated: 2022/07/08 19:13:21 by salee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_num_of_rows(char const *s, char c)
{
	size_t 	i;
	size_t 	end;
	size_t	rows;

	i = 0;
	rows = 0;
	end = ft_strlen(s);
	while (i < end)
	{
		while (i < end && s[i] == c)
			++i;
		++rows;
		while (i < end && s[i] != c)
			++i;
	}
	return (rows);
}

char	**ft_split(char const *s, char c)
{

}
