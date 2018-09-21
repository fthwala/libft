/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fthwala <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 14:50:31 by fthwala           #+#    #+#             */
/*   Updated: 2017/07/21 10:28:25 by fthwala          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*new_lst;
	t_list		*prev_lst;

	if (!(lst))
		return (NULL);
	new_lst = ft_lstnew(lst->content, lst->content_size);
	if (!(new_lst))
		return (NULL);
	new_lst = f(lst);
	prev_lst = new_lst;
	while (lst->next)
	{
		prev_lst->next = f(lst->next);
		prev_lst = prev_lst->next;
		lst = lst->next;
	}
	return (new_lst);
}
