/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fthwala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 16:15:42 by fthwala           #+#    #+#             */
/*   Updated: 2017/07/20 13:48:28 by fthwala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str1;
	char *str2;

	if (s1 && s2)
	{
		str1 = ft_strnew(ft_strlen(s1));
		str2 = ft_strnew(ft_strlen(s2));
		if (str1 && str2)
		{
			ft_strcpy((char *)str1, s1);
			ft_strcpy((char *)str2, s2);
			return (ft_strcat(str1, str2));
		}
	}
	return (NULL);
}
