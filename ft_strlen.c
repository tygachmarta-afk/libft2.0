/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtyhach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 15:31:18 by mtyhach           #+#    #+#             */
/*   Updated: 2026/06/04 16:04:23 by mtyhach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
/*
int	main(void)
{
	printf("%d\n", ft_strlen("ciao"));
	printf("%d\n", ft_strlen("42"));
	printf("%d\n", ft_strlen(""));
}
*/
