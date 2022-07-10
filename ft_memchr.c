/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee2 <salee2n@student.42seoul.k>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 21:08:23 by salee2            #+#    #+#             */
/*   Updated: 2022/07/10 14:42:54 by salee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*sp;

	sp = (unsigned char *)s;
	i = 0;
	while (i < n && sp[i])
	{
		if (sp[i] == (unsigned char)c)
			return ((void *)(sp + i));
		++i;
	}
	if (sp[i] == (unsigned char)c)
		return ((void *)(sp + i));
	return (0);
}
