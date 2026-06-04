/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtyhach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 15:53:20 by mtyhach           #+#    #+#             */
/*   Updated: 2026/05/28 13:55:35 by mtyhach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*p1;
	const char	*p2;

	p1 = (const char *)s1;
	p2 = (const char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[] = "abc";
	char	s2[] = "abc";
	char	s3[] = "abd";

	printf("Test 1:\n");
	printf("memcmp    = %d\n", memcmp(s1, s2, 3));
	printf("ft_memcmp = %d\n\n", ft_memcmp(s1, s2, 3));

	printf("Test 2:\n");
	printf("memcmp    = %d\n", memcmp(s1, s3, 3));
	printf("ft_memcmp = %d\n\n", ft_memcmp(s1, s3, 3));
}*/
