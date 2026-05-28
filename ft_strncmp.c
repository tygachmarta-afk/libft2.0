/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtyhach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 14:23:35 by mtyhach           #+#    #+#             */
/*   Updated: 2026/05/28 14:23:39 by mtyhach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
/*int	main(void)
{
	printf("Test 1:\n");
	printf("strncmp    = %d\n", strncmp("abc", "abc", 3));
	printf("ft_strncmp = %d\n\n", ft_strncmp("abc", "abc", 3));

	printf("Test 2:\n");
	printf("strncmp    = %d\n", strncmp("abc", "abd", 3));
	printf("ft_strncmp = %d\n\n", ft_strncmp("abc", "abd", 3));

	printf("Test 3:\n");
	printf("strncmp    = %d\n", strncmp("abd", "abc", 3));
	printf("ft_strncmp = %d\n\n", ft_strncmp("abd", "abc", 3));

	printf("Test 4:\n");
	printf("strncmp    = %d\n", strncmp("Hello", "Help", 3));
	printf("ft_strncmp = %d\n\n", ft_strncmp("Hello", "Help", 3));

	printf("Test 5:\n");
	printf("strncmp    = %d\n", strncmp("Hello", "Help", 4));
	printf("ft_strncmp = %d\n\n", ft_strncmp("Hello", "Help", 4));

	printf("Test 6:\n");
	printf("strncmp    = %d\n", strncmp("", "", 1));
	printf("ft_strncmp = %d\n\n", ft_strncmp("", "", 1));

	printf("Test 7:\n");
	printf("strncmp    = %d\n", strncmp("abc", "xyz", 0));
	printf("ft_strncmp = %d\n\n", ft_strncmp("abc", "xyz", 0));

	return (0);
}*/
