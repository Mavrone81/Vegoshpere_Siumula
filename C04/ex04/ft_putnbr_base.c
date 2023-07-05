/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:24:10 by ykai              #+#    #+#             */
/*   Updated: 2023/07/05 13:43:36 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	atoi_short(char *str)
{
	int	result;
	int	i;
	int	mult;

	i = 0;
	result = 0;
	mult = 1;
	if (str[0] == '-')
	{
		mult = -1;
		i++;
	}	
	while (str[i] != '\0' && str[i] <= '9' && str[i] >= '0')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * mult);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

int	change_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	return (i + 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	ubase;

	ubase = change_base(base);
	if (nbr == 0)
	{
		ft_putchar('0');
	}
	if (ubase == 10)
	{
		ft_putnbr(nbr);
	}
	if (ubase == 2 || ubase == 8 || ubase == 16)
	{
		if (nbr < 0)
			ft_putchar('-');
		else
		{
			ft_putnbr_base(nbr / ubase, base);
			ft_putnbr_base(nbr % ubase, base);
		}
	}
	else
		ft_putchar(nbr + '0');
}
