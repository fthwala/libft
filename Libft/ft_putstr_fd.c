/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fthwala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 09:56:18 by fthwala           #+#    #+#             */
/*   Updated: 2017/07/20 12:06:12 by fthwala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *str, int fd)
{
	int index;

	index = 0;
	if (str)
	{
		while (str[index] != '\0')
		{
			ft_putchar_fd(str[index], fd);
			index++;
		}
	}
}
