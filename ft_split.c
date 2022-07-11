/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salee2 <salee2n@student.42seoul.k>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 19:13:20 by salee2            #+#    #+#             */
/*   Updated: 2022/07/11 22:11:52 by salee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_num_of_word(char const *s, char c)
{
	size_t	i;
	size_t	words;

	if (s == 0)
		return (0);
	i = 0;
	words = 0;
	while (s[i])
	{
		++words;
		i = ft_strchr(s + i, c) - s;
		while(s[i] == c)
			++i;
	}
	return (words);
}

size_t	get_word_end(char const *s, char c, size_t s_idx)
{
	while (s[s_idx] && s[s_idx] != c)
		++s_idx;
	return (s_idx);
}

void	free_all(char **ret, int word_idx)
{
	--word_idx;
	while (word_idx >= 0)
	{
		free(ret[word_idx]);
		--word_idx;
	}
	free(ret);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	size_t	words;
	size_t	s_idx;
	size_t	word_idx;

	s = ft_strtrim(s, &c);
	words = get_num_of_word(s, c) + 1;
	ret = (char **) malloc(sizeof(char *) * words);
	if (ret == 0)
		return (0);
	s_idx = 0;
	word_idx = 0;
	while (word_idx < words)
	{
		ret[word_idx] = ft_substr(s, s_idx, get_word_end(s, c, s_idx) - s_idx);
		if (ret[word_idx] == 0)
		{
			free_all(ret, word_idx);
			return (0);
		}
		s_idx = get_word_end(s, c, s_idx);
		while (s[s_idx] && s[s_idx] == c)
			++s_idx;
	}
	return (ret);
}

#include <stdio.h>

int main(void)
{
	char a[] = "asdf,1234,5555,ffff";
	char **f = ft_split(a, ',');
	while (*f)
	{
		printf("%s \n", *f);
		f++;
	}
	printf("%s \n", *f);

}
