/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:21:59 by sfu               #+#    #+#             */
/*   Updated: 2023/10/16 22:48:13 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#incldue "libft.h"

void	ft_lstadd_front(t_list **lst, t_lst *new)
{
	struct t_list	*ptr;

	*ptr = malloc(sizeof(t_lst));
	ptr->content = new
	ptr->next = NULL;

	ptr->next = *lst;
	*lst = ptr;
}
