/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fthwala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 12:11:06 by fthwala           #+#    #+#             */
/*   Updated: 2017/07/20 14:00:34 by fthwala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
	{
		if (ft_strlen(src) < n && index < ft_strlen(src))
			dest[index] = src[index];
		if (index > ft_strlen(src))
			dest[index] = '\0';
		else
			dest[index] = src[index];
		index++;
	}
	return (dest);
}
