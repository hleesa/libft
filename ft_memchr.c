/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee2 <salee2n@student.42seoul.k>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:08:23 by salee2            #+#    #+#             */
/*   Updated: 2022/07/07 21:22:00 by salee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*sp;

	sp = s;
	i = 0;
	while (i < n)
	{
		if (sp[i] == c)
			return ((void *)(sp + i));
		++i;
	}
	if (sp[i] == c)
		return ((void *)(sp + i));
	return (0);
}
