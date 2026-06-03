/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtyhach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 15:34:20 by mtyhach           #+#    #+#             */
/*   Updated: 2026/06/03 15:34:22 by mtyhach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static int	word_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static void	free_split(char **split, int i)
{
	while (i--)
		free(split[i]);
	free(split);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		len;

	if (!s)
		return (NULL);
	result = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			len = word_len(s, c);
			result[i] = malloc((len + 1) * sizeof(char));
			if (!result[i])
				return (free_split(result, i), NULL);
			for (int j = 0; j < len; j++)
				result[i][j] = s[j];
			result[i][len] = '\0';
			i++;
			s += len;
		}
	}
	result[i] = NULL;
	return (result);
}
