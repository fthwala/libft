/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fthwala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 17:25:15 by fthwala           #+#    #+#             */
/*   Updated: 2017/07/20 11:41:41 by fthwala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*src1;
	char	*dest1;
	size_t	index;

	dest1 = (char *)dst;
	src1 = (char *)src;
	index = 0;
	while (index < n)
	{
		dest1[index] = src1[index];
		index++;
	}
	return (dest1);
}
