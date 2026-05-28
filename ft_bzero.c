/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtyhach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 13:37:13 by mtyhach           #+#    #+#             */
/*   Updated: 2026/05/28 13:48:28 by mtyhach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char	*p;
	size_t	i;

	p = (char *)s;
	i = 0;
	while (i < 0)
	{
		p[i] = 0;
		i++;
	}
}
/*
int main()
{
	char str[7] = "Taylor!";
	ft_bzero(str, 7);
	printf("%s\n", str);
	return (0);
}
*/
