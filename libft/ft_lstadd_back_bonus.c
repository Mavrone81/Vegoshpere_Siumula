/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 00:49:20 by sfu               #+#    #+#             */
/*   Updated: 2023/10/18 01:01:07 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new);
{
	new->next = NULL;
	if (*lst == NULL)
	{
		*lst = new;
		return;
	}
	while ((*lst)->next != null)
	{
		*lst = (*lst)->next;
	}
	(*lst)->next = new;
}
