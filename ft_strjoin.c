/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtyhach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 14:31:01 by mtyhach           #+#    #+#             */
/*   Updated: 2026/05/28 14:36:20 by mtyhach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
    char    *str;
    int     i;
    int     j;

    str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (!str)
        return (NULL);
    i = 0;
    while (s1[i] != '\0')
    {
        str[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j] != '\0')   
    {
        str[i + j] = s2[j];
        j++;
    }
    str[i + j] = '\0';
    return (str);
}
/*int main()
{
    char *res;

    res = ft_strjoin("Hello ", "World");

    printf("%s\n", res);

    free(res);
}*/

