/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee2 <salee2n@student.42seoul.k>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:24:52 by salee2            #+#    #+#             */
/*   Updated: 2022/07/07 16:13:53 by salee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dp;
	unsigned char	*sp;

	i = 0;
	dp = (unsigned char *)dst;
	sp = (unsigned char *)src;
	while (i < len)
	{
		if (dp < sp)
		{
			dp[i] = sp[i];
			++i;
		}
		else
		{
			dp[len - 1] = sp[len - 1];
			--len;
		}
	}
	return (dst);
}
