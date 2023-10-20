/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 23:31:54 by sfu               #+#    #+#             */
/*   Updated: 2023/10/20 01:43:07 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n == 0) 
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (n / 10 != 0)
	{
		ft_putnbr_fd(n /10, fd);
	}
	ft_putchar_fd(n % 10 + '0', fd);
}

/*int main() {
    int fd = 1; // 1 represents standard output

    // Test cases
    ft_putnbr_fd(123, fd);  // Expected output: 123
    ft_putchar_fd('\n', fd); // Add a newline for clarity

    ft_putnbr_fd(-456, fd); // Expected output: -456
    ft_putchar_fd('\n', fd);

    ft_putnbr_fd(0, fd);    // Expected output: 0
    ft_putchar_fd('\n', fd);

    ft_putnbr_fd(-2147483648, fd); // Expected output: -2147483648
    ft_putchar_fd('\n', fd);

    return 0;
}*/
