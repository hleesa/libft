/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee2 <salee2n@student.42seoul.k>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 20:01:53 by salee2            #+#    #+#             */
/*   Updated: 2022/07/07 20:42:33 by salee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	size_t	i;
	char	*ret;

	if (s == 0)
		return (0);
	ret = 0;
	i = ft_strlen(s) - 1;
	while (i > 0)
	{
		if (s[i] == c)
		{
			ret = s + i;
			break ;
		}
		--i;
	}
	if (s[i] == c)
		ret = s + i;
	return (ret);
}
