/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee2 <salee2n@student.42seoul.k>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 19:13:20 by salee2            #+#    #+#             */
/*   Updated: 2022/07/09 15:38:09 by salee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_num_of_rows(char const *s, char c)
{
	size_t	i;
	size_t	end;
	size_t	rows;

	i = 0;
	rows = 0;
	end = ft_strlen(s);
	while (i < end)
	{
		++rows;
		while (i < end && s[i] != c)
			++i;
		while (i < end && s[i] == c)
			++i;
	}
	return (rows);
}

size_t	get_del_idx(char const *s, char c, size_t s_idx)
{
	while (s[s_idx] != 0 && s[s_idx] != c)
		++s_idx;
	return (s_idx);
}

void	free_all(char **ret, int row_idx)
{
	--row_idx;
	while (row_idx >= 0)
	{
		free(ret[row_idx]);
		--row_idx;
	}
	free(ret);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	size_t	rows;
	size_t	row_idx;
	size_t	s_idx;

	s = ft_strtrim(s, &c);
	rows = get_num_of_rows(s, c) + 1;
	ret = (char **) malloc(sizeof(char *) * rows);
	if (ret == 0)
		return (0);
	s_idx = 0;
	row_idx = 0;
	while (row_idx < rows)
	{
		ret[row_idx] = ft_substr(s, s_idx, get_del_idx(s, c, s_idx) - s_idx);
		if (ret[row_idx] == 0)
		{
			free_all(ret, row_idx);
			return (0);
		}
		s_idx += get_del_idx(s, c, s_idx);
		while (s[s_idx] != 0 && s[s_idx] == c)
			++s_idx;
	}
	return (ret);
}
