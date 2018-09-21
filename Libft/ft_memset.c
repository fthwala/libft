/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fthwala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 13:55:38 by fthwala           #+#    #+#             */
/*   Updated: 2017/07/20 11:55:59 by fthwala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	index1;
	char	*str2;

	str2 = (char *)str;
	index1 = 0;
	if (len < 1)
		return (str2);
	else
	{
		len--;
		while (index1 <= len)
		{
			str2[index1] = (unsigned char)c;
			index1++;
		}
		return (str2);
	}
}
