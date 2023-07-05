/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:24:10 by ykai              #+#    #+#             */
/*   Updated: 2023/07/05 21:02:16 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_validate(char *check)
{
	int	i;
	int	j;	
	int	base_l;

	i = 0;
	base_l = ft_strlen(check);
	while (i < base_l -1)
	{
		if (check[i] == '-' || check[i] == '+')
			return (0);
		j = i + 1;
		while (j < base_l)
		{
			if (check[i] == check[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

long	ft_abs(long num)
{
	if (num < 0)
	{
		return (-num);
	}
	return (num);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	long	lnbr;

	lnbr = nbr;
	i = ft_strlen(base);
	if (ft_validate(base) == 0)
		return ;
	if (lnbr < 0)
	{
		lnbr = -lnbr;
		ft_putchar('-');
	}
	if (ft_abs(lnbr) >= i)
	{
		ft_putnbr_base(lnbr / i, base);
		ft_putnbr_base(lnbr % i, base);
	}
	else
	{
		ft_putchar(base[lnbr]);
	}
}
