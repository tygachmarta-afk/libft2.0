/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtyhach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 15:31:18 by mtyhach           #+#    #+#             */
/*   Updated: 2026/05/19 15:43:44 by mtyhach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
int main(void)
{
	printf("%d\n", ft_strlen("ciao"));
	printf("%d\n", ft_strlen("42"));
	printf("%d\n", ft_strlen(""));
}
*/
