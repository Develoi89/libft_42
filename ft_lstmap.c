/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: develoi89 <develoi89@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:20:35 by ealonso-          #+#    #+#             */
/*   Updated: 2022/07/07 19:45:38 by develoi89        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newpart;

	if (!f || !del)
		return (NULL);
	while (lst->next != NULL)
	{
		newpart = ft_lstnew((*f)(lst->content));
		if (!newpart)
		{
			while (newlist->next != NULL)
			{
				newpart = newlist->next;
				(*del)(newpart->content);
				free (newpart);
				newlist = newpart;
			}
			(*del)(newlist->content);
			free (newlist);
			return (NULL);
		}
		ft_lstadd_back(&newlist, newpart);
		lst = lst->next;
	}
	return (newlist);
}
