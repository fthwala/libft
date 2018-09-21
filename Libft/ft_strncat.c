/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fthwala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 22:50:01 by fthwala           #+#    #+#             */
/*   Updated: 2017/07/20 13:59:09 by fthwala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	index;
	size_t	len;
	char	nul;

	nul = '\0';
	index = 0;
	len = ft_strlen(dest);
	while (src[index] != '\0')
	{
		if (index < n)
		{
			dest[len] = src[index];
		}
		else
			dest[len] = nul;
		index++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
