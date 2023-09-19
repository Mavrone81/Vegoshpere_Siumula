/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 22:14:34 by sfu               #+#    #+#             */
/*   Updated: 2023/07/10 22:15:29 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power_recur(int nb, int power, int n)
{
	if (power == 0)
		return (1);
	if (power == 1)
		return (n);
	if (power >= 1)
		return (ft_recursive_power_recur(nb, power - 1, n * nb));
	return (0);
}

int	ft_recursive_power(int nb, int power)
{
	return (ft_recursive_power_recur(nb, power, nb));
}
