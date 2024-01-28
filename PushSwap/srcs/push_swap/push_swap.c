/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <sfu     @student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:07:24 by sfu                #+#    #+#            */
/*   Updated: 2024/01/28 14:07:24 by sfu               ###   ########         */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int main    (int argc, char *argv[])
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && !agrv[1][0]))
		return (1);
	else if (argc == 2)
		argv = split(agrv[1], ' ');
	init_stack_a(&a, argv + 1)
	if (!sort(a))
	{
		if (stack_len(a) == 2)
			sa(&a, false);
		else if  (stack_len(a) == 3)
			last_3(&a);
		else
			sort_stack(&a, &b);
	}
	free_all(&a);
	return (0);
}
