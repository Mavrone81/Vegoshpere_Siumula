/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 00:38:18 by sfu               #+#    #+#             */
/*   Updated: 2023/10/22 12:23:52 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*current;
	char	*temp;

	//current = NULL;
	if (!lst || !f || !del)
		return (NULL);
	head = ft_lstnew(f(lst->content));
	if (!head)
		return (NULL);
	current = head;
	lst = lst->next;
	while (lst)
	{
		temp = f(lst->content);
		head->next = ft_lstnew(temp);
		if (!head->next)
		{
			if (temp)
				del(temp);
			ft_lstclear(&current, del);
			return (NULL);
		}
		head = head->next;
		lst = lst->next;
	}
	//head->next = NULL;
	return (current);
}
