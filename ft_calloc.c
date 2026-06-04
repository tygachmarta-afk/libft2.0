/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtyhach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 12:22:40 by mtyhach           #+#    #+#             */
/*   Updated: 2026/05/28 13:51:00 by mtyhach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdint.h>
//#include <stdio.h>
//#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	if (size == 0 || nmemb == 0)
		return (malloc(0));
	if (nmemb > 0 && size > (size_t)-1 / nmemb)
		return (NULL);
	array = malloc(size * nmemb);
	if (!array)
		return (NULL);
	ft_memset(array, 0, nmemb * size);
	return (array);
}
/*
int	main(void)
{
	size_t count = SIZE_MAX;
	size_t size = 2;

	printf("%zu\n", count * size);

	return (0);
}*/
