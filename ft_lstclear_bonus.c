/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agamay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:26:52 by agamay            #+#    #+#             */
/*   Updated: 2024/10/16 16:56:19 by agamay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	void	*temp;

	if (!(lst && *lst && del))
		return ;
	temp = *lst;
	while (*lst)
	{
		del((*lst)->content);
		*lst = (*lst)->next;
		free(temp);
		temp = *lst;
	}
}
