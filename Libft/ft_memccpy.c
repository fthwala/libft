/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fthwala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 17:26:44 by fthwala           #+#    #+#             */
/*   Updated: 2017/07/20 11:39:34 by fthwala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			count;
	unsigned char	*src1;
	unsigned char	*dest1;

	src1 = (unsigned char *)src;
	dest1 = (unsigned char *)dest;
	count = 0;
	while (count < n)
	{
		if (src1[count] != (unsigned char)c)
			dest1[count] = src1[count];
		else
		{
			dest1[count] = src1[count];
			return (&dest1[count + 1]);
		}
		count++;
	}
	return (NULL);
}
