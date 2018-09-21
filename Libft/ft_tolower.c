/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fthwala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 19:15:54 by fthwala           #+#    #+#             */
/*   Updated: 2017/07/20 14:24:22 by fthwala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_tolower(int c)
{
	if (ft_isalpha(c) == 1)
	{
		if (c >= 'A' && c <= 'Z')
			return (c + 32);
		else
			return (c);
	}
	else
		return (c);
}
