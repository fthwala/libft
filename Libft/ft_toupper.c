/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fthwala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 19:15:54 by fthwala           #+#    #+#             */
/*   Updated: 2017/07/20 14:25:12 by fthwala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_toupper(int c)
{
	if (ft_isalpha(c) == 1)
	{
		if (c >= 'a' && c <= 'z')
			return (c - 32);
		else
			return (c);
	}
	else
		return (c);
}