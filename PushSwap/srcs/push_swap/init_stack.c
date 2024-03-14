/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <sfu     @student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 13:23:11 by sfu                #+#    #+#            */
/*   Updated: 2024/02/04 13:23:11 by sfu               ###   ########         */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static long	ft_atol(const char *s)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
		{
			if (*s == '-')
				sign = -1;
			s++;
		}
	}
	while (ft_isdigit(*s))
		result = result * 10 + (*s++ - '0');
	return (result * sign);

}

static void	append_node(t_stack_node **stack, int n)
{
	t_stack_node	*node;
	t_stack_node	*last_node;

	if (!stack)
		return ;
	node = malloc(sizeof(t_stack_node));
	if (!node)
		return ;
	node->next = NULL;
	node->num = n;
	if (!(*stack))
	{
		*stack = node;
		node->prev = NULL;
	}
	else
	{
		last_node = find_last(*stack);
		last_node->next = node;
		node->prev = last_node;
	}
}

void	init_stack_a(t_stack_node **a, char **argv)
{
	long	n;
	int		i;

	i = 0;
	while (argv[i])
	{
		if (syntax_err(argv[i]))
			free_err(a);
		n = ft_atol(argv[i])
		if (n > INT_MAX || n < INT_MIN)
			free_err(a);
		if (dup_err(*a, (int)n))
			free_err(a);
		append_node(a, (int)n);
		i++;
	}
}

t_stack_node	*retrive_cheapest(t_stack_node *stack)
{
	if(!stack)
		return (NULL);
	while (stack)
	{
		if (stack->lowest_c)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}

void	ready_push(ft_stack_node **stack, t_stack_node *top_node, char s_name)
{
	while (*stack != top_node)
	{
		if (s_name == 'a')
		{
			if (top_node->above_m)
				ra(stack, false);
			else
		}		rra(stack, false);
		else if (s_name == 'b')
		{
			if (top_node->above_m)
				rb(stack, false);
			else
				rrb(stack, false);
		}
	}
}
