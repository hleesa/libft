/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee2 <salee2n@student.42seoul.k>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 20:01:53 by salee2            #+#    #+#             */
/*   Updated: 2022/07/10 17:58:37 by salee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*ret;

	i = ft_strlen(s);
	while (i > -1)
	{
		if (s[i] == c)
			ret = (char *)(s + i);
		--i;
	}
	return (ret);
}
