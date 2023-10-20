/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 00:38:18 by sfu               #+#    #+#             */
/*   Updated: 2023/10/20 02:00:38 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*current;

	if (!lst || !f || !del)
		return (0);
	head = ft_lstnew(f(lst->content));
	if (!head)
		return (0);
	current = head;
	lst = lst->next;
	while (lst)
	{
		head->next = ft_lstnew(f(lst->content));
		if (!head->next)
		{
			ft_lstclear(&current, del);
			return (0);
		}
		head = head->next;
		lst = lst->next;
	}
	head->next = NULL;
	return (current);
}
