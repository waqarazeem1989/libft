/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waqar <moazeem@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:02:36 by waqar             #+#    #+#             */
/*   Updated: 2022/05/08 15:25:18 by waqar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_isalpha(char c)
{
	if (c >='A' && c<='Z' || c>='a' && c<='z')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
