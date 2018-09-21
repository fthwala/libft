/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fthwala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 22:50:01 by fthwala           #+#    #+#             */
/*   Updated: 2017/07/20 12:09:36 by fthwala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int		index;
	size_t	len;

	index = 0;
	len = ft_strlen(dest);
	while (src[index] != '\0')
	{
		dest[len] = src[index];
		index++;
		len++;
	}
	dest[len] = '\0';
	return ((char *)dest);
}
