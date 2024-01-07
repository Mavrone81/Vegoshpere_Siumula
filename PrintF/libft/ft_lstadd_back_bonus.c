/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 00:46:57 by sfu               #+#    #+#             */
/*   Updated: 2023/10/21 00:57:50 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	tmp = *lst;
	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		while ((*lst) != NULL && (*lst)->next != NULL)
		{
			*lst = (*lst)->next;
		}
		(*lst)->next = new;
		*lst = tmp;
		new->next = NULL;
	}
}
