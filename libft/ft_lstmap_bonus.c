/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 00:38:18 by sfu               #+#    #+#             */
/*   Updated: 2023/10/22 12:44:31 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*current;
	char	*temp;

	if (!lst || !f || !del)
		return (NULL);
	current = NULL;
	while (lst)
	{
		temp = f(lst->content);
		head = ft_lstnew(temp);
		if (!head)
		{
			if (temp)
				del(temp);
			ft_lstclear(&current, del);
			return (NULL);
		}
		ft_lstadd_back(&current, head);
		head = head->next;
		lst = lst->next;
	}
	return (current);
}
