/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee2 <salee2n@student.42seoul.k>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:01:23 by salee2            #+#    #+#             */
/*   Updated: 2022/07/08 15:21:12 by salee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*ret;

	ret = malloc(size * count);
	if (ret == 0)
		return (0);
	i = 0;
	while (i < count)
	{
		((unsigned char *) ret)[i * size] = 0;
		++i;
	}
	return (ret);
}
