/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:24:10 by ykai              #+#    #+#             */
/*   Updated: 2023/07/02 23:21:33 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_putnbr(int nb)
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

void    ft_putnbr_base(int nbr, char *base)
{
    char    *h;
    int i;
    int reminder;

    i = 0;
    *h = "0123456789ABCDEF";
    while (nbr[i] != '\0')
    {
        if (*base == "decimal")
        {
            ft_putnbr(nbr[i]);
        }
        else if (*base == "binary")
        {
            ft_putchar(nbr[i] % 2);
        }
        else if (*base == "hexadecimal" && (nr >= 0 || nbr[i] <= 16)
        {
            nbr[i] = nbr[i] / 16;
            reminder = nbr[i] % 16;
            if (reminder <10)
            {
                nbr[i] = reminder + '0';
            }
            else
            {
                nbr[i] = reminder - 10 + 'A';
            }
            ft_putchar(nbr[i]);
        }
        i++;
    }
    
}