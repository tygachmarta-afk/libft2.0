/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtyhach <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 12:26:29 by mtyhach           #+#    #+#             */
/*   Updated: 2026/06/03 12:26:31 by mtyhach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
    char    *newstr;
    unsigned int    i;

    if (!s || !f)
            return (NULL);

    newstr = malloc(ft_strlen(s) + 1);

    if (!newstr)
        return(NULL);

    i = 0;
    while (s[i])
    {
        newstr[i] = f(i, s[i]);
        i++;
    }
    newstr[i] = '\0';
    return(newstr);
}
