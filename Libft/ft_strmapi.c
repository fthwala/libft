/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fthwala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 11:17:15 by fthwala           #+#    #+#             */
/*   Updated: 2017/07/20 13:58:16 by fthwala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		index;

	index = 0;
	if (s)
	{
		str = ft_strnew(ft_strlen(s));
		if (str)
		{
			while (s[index])
			{
				str[index] = f(index, s[index]);
				index++;
			}
			str[index] = '\0';
			return (str);
		}
		else
			return (NULL);
	}
	return (NULL);
}
