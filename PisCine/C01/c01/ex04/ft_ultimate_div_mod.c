/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:46:35 by sfu               #+#    #+#             */
/*   Updated: 2023/06/26 17:53:31 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp1;
	int	tmp2;

	tmp1 = *a / *b;
	tmp2 = *a % *b;
	*a = tmp1;
	*b = tmp2;
}
