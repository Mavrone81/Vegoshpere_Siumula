/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 23:21:05 by sfu               #+#    #+#             */
/*   Updated: 2023/06/26 02:54:43 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	d;

	d = '0';
	while (d <= '9')
	{
		write (1, &d, 1);
		d++;
	}
}

/*int	main(void)
{
	ft_print_reverse_num();
}*/