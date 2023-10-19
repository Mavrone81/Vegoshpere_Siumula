/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 00:46:57 by sfu               #+#    #+#             */
/*   Updated: 2023/10/20 00:56:16 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstadd_back(t_list **lst, t_list *new);
{
	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		while (*lst->next != NULL)
		{
			*lst = (*lst)->next;
		}
		(*lst)->next = new;
		new->next = NULL;
	}
}
