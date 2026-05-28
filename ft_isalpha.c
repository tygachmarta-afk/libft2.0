/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtyhach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 14:17:17 by mtyhach           #+#    #+#             */
/*   Updated: 2026/05/19 14:55:33 by mtyhach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*int main(void)
{
	printf("%d\n", ft_isalpha('A')); 
	printf("%d\n", ft_isalpha('z'));
	printf("%d\n", ft_isalpha('5')); // 0
	printf("%d\n", ft_isalpha('@')); // 0
	return (0);
}*/
