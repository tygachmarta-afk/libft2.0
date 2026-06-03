/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtyhach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 13:00:04 by mtyhach           #+#    #+#             */
/*   Updated: 2026/06/03 13:00:06 by mtyhach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "libft.h"
void    ft_putstr_fd(char *s, int fd)
{
    int i;

    if (!s)
        return;
    i = 0;
    while (s[i] != '\0')
    {
        write(fd, &s[i], 1);
        i++;
    }
}
/*
int main(void)
{
    ft_putstr_fd("Hello bitch\n", 1);
    return (0);
}*/