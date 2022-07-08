/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee2 <salee2n@student.42seoul.k>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:13:59 by salee2            #+#    #+#             */
/*   Updated: 2022/07/08 16:22:07 by salee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	s1len;
	size_t	s2len;
	char	*ret;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	ret = (char *) malloc(s1len + s2len + 1);
	if (ret == 0)
		return (0);
	i = 0;
	while (i < s1len)
	{
		ret[i] = s1[i];
		++i;
	}
	i = 0;
	while (1 < s2len)
	{
		ret[s1len + i] = s2[i];
		++i;
	}
	ret[s1len + s2len] = 0;
	return (ret);
}
