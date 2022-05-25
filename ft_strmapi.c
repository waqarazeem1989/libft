/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waqar <moazeem@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:24:38 by waqar             #+#    #+#             */
/*   Updated: 2022/05/24 20:25:24 by waqar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: create new string from modifying string with specified function
**
** DESCRIPTION:
** 		Applies the function ’f’ to each character of the string ’s’ to create
**	a new string (with malloc(3)) resulting from successive applications of ’f’.
*/

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int     i;
    char    *str;

    i = 0;
    if (s == NULL || f == NULL)
    {
        return (NULL);
    }
    if (!(str = (char *)malloc(sizeof(char) * ft_strlen((char *)s) + 1)))
    {
        return (NULL);
    }
    while (s[i] != '\0')
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}
