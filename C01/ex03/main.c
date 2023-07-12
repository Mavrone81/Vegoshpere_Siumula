/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 21:48:19 by sfu               #+#    #+#             */
/*   Updated: 2023/06/26 21:49:14 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a, b, div, mod, *ptr1, *ptr2;

	a = 10;
	b = 2;
	ptr1 = &div;
	ptr2 = &mod;
	ft_div_mod(a, b, ptr1, ptr2);
	printf("Result (11)= %d\n", div);
	printf("Rest (27)= %d\n", mod); 
}

