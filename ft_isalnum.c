/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waqar <moazeem@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 18:42:03 by waqar             #+#    #+#             */
/*   Updated: 2022/05/08 13:57:02 by waqar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
	if (c >=48 && c<=57 || c>=65 && c<=90 || c>=97 && c<=122)
	{
		return(1);
	}
	else 
	{
		return(0);
	}
}
