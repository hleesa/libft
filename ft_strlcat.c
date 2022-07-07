/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee2 <salee2n@student.42seoul.k>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:06:41 by salee2            #+#    #+#             */
/*   Updated: 2022/07/07 16:15:04 by salee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;

	dstlen = ft_strlen(dst);
	while (src[i] != 0 && dstlen + i + 1 < dstsize)
	{
		dst[dstlen + i] = src[i];
		++i;
	}
	dst[dstlen + i] = 0;
	return (dstlen + i);
}
