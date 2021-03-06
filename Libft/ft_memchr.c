/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fthwala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 12:14:45 by fthwala           #+#    #+#             */
/*   Updated: 2017/07/20 11:40:32 by fthwala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*str_new;
	size_t	index;

	index = 0;
	str_new = (char *)str;
	while (index < n)
	{
		if (str_new[index] == (char)c)
		{
			ft_strchr(str_new, c);
			return (&str_new[index]);
		}
		else
			index++;
	}
	return (NULL);
}
