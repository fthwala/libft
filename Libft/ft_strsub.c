/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fthwala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 11:05:10 by fthwala           #+#    #+#             */
/*   Updated: 2017/07/20 14:11:08 by fthwala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	index;

	index = 0;
	if (s)
	{
		new_str = ft_strnew(len);
		if (new_str)
		{
			if (start < ft_strlen(s) && len <= ft_strlen(s))
			{
				while (index < len)
				{
					new_str[index] = s[start + index];
					index++;
				}
				new_str[index] = '\0';
				return (new_str);
			}
		}
	}
	return (NULL);
}
