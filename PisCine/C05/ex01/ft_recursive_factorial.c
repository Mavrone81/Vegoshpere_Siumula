/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 21:56:50 by sfu               #+#    #+#             */
/*   Updated: 2023/07/12 15:21:58 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	else
		return (nb * (ft_recursive_factorial(nb - 1)));
}

/*void	main()
{
	for (int	i = 0; i <= 10; i++)
		printf("factorial of (%d) = %d\n", i, ft_recursive_factorial(i));
}*/
