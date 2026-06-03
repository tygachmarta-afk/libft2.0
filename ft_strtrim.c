/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtyhach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 15:36:27 by mtyhach           #+#    #+#             */
/*   Updated: 2026/06/03 15:36:29 by mtyhach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 
#include <stdio.h> 
#include "libft.h"
#include <stdlib.h>

static int	ft_isset(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*trimmed;
	size_t	i;

	if (!s1 || !set)
		return (NULL);

	start = 0;
	while (s1[start] && ft_isset(s1[start], set))
		start++;

	end = 0;
	while (s1[end])
		end++;

	while (end > start && ft_isset(s1[end - 1], set))
		end--;

	len = end - start;

	trimmed = (char *)malloc(sizeof(char) * (len + 1));
	if (!trimmed)
		return (NULL);

	i = 0;
	while (i < len)
	{
		trimmed[i] = s1[start + i];
		i++;
	}
	trimmed[i] = '\0';

	return (trimmed);
}
/*int	main(void)
{
	char	*result;

	result = ft_strtrim("---hello---", "-");
	printf("1: %s\n", result);
	free(result);

	result = ft_strtrim("   hello   ", " ");
	printf("2: %s\n", result);
	free(result);

	result = ft_strtrim("++--hello--++", "+-");
	printf("3: %s\n", result);
	free(result);

	result = ft_strtrim("hello", "-");
	printf("4: %s\n", result);
	free(result);

	result = ft_strtrim("------", "-");
	printf("5: %s\n", result);
	free(result);

	return (0);
}*/
