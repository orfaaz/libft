/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agamay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:51:18 by agamay            #+#    #+#             */
/*   Updated: 2024/10/17 22:50:35 by agamay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_newlist(t_list *dest, t_list *lst,
			void *(*f)(void *), void (*del)(void *))
{
	while (lst)
	{
		dest->content = f(lst->content);
		lst = lst->next;
		if (lst)
		{
			ft_lstadd_back(&dest, ft_lstnew(lst->content));
			if (!dest->next)
			{
				del(dest->next);
				return ;
			}
			dest = dest->next;
		}
	}
	dest->next = NULL;
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dest;
	t_list	*head;

	if (!(lst && f && del))
		return (NULL);
	dest = ft_lstnew(lst->content);
	if (!dest)
		return (NULL);
	head = dest;
	ft_newlist(dest, lst, f, del);
	return (head);
}
