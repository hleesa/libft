/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee2 <salee2n@student.42seoul.k>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:59:06 by salee2            #+#    #+#             */
/*   Updated: 2022/07/08 15:59:07 by salee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;

	ret = (char *) malloc(len + 1);
	if (ret == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		ret[i] = s[start + i];
		++i;
	}
	ret[i] = 0;
	return (ret);
}
