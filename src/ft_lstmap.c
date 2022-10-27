/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:20:35 by ealonso-          #+#    #+#             */
/*   Updated: 2022/07/20 15:29:27 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newpart;
	void	*temp;

	if (!lst || !f || !del)
		return (NULL);
	newlist = NULL;
	while (lst)
	{
		temp = f(lst->content);
		newpart = ft_lstnew(temp);
		if (newpart == NULL)
		{
			del(temp);
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&newlist, newpart);
	}
	return (newlist);
}
