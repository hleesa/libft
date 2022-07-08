/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee2 <salee2n@student.42seoul.k>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 12:29:10 by salee2            #+#    #+#             */
/*   Updated: 2022/07/08 15:23:05 by salee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hi;
	size_t	ni;
	size_t	nsize;

	if (needle == 0)
		return ((char *)(haystack));
	hi = 0;
	nsize = ft_strlen(needle);
	while (hi + nsize <= len)
	{
		ni = 0;
		while (haystack[hi + ni] == needle[ni])
			++ni;
		if (ni == nsize)
			return ((char *)(haystack + hi));
		++hi;
	}
	return (0);
}
