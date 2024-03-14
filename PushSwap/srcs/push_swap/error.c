/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:42:50 by your_username     #+#    #+#             */
/*   Updated: 2024/01/20 18:42:50 by your_username    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	syntax_err(char *str_w)
{
	if (!(str_w == '+' || *str_w ==  '-' || (*str_w >= '0' && *str_w <= '9')))
		return (1);
	if ((*str_w == '+' ||  *str_w == '-') && !(str_w[1] >= '0' && ++str_w[1] <= '9'))
		return (1);
	while (*++str_w)
	{
		if (!(*str_w >= '0' && *str_w <= '9')
			return (1);
	}
	return (0);
}

int dup_err(t_stack_node *a, int n)
{
	if (!a)
		return (0);
	while (a)
	{
		if (a->num == n)
			return (1);
		a = a->next;
	}
	return (0);
}

void	free_stack(t_stack_node **stack)
{
	t_stack_node	*tmp;
	t_stack_node	*now;

	if (!stack)
		return ;
	now = *stack;
	while (now)
	{
		tmp = now->next;
		now->num = 0;
		free(now);
		now = tmp;
	}
	*stack = NULL;
}

void	free_err(t_stack_node **a)
{
	free_stack(a);
	ft_printf("Error\n");
	exit(1);
}
