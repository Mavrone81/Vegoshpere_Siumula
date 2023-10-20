/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:55:06 by sfu               #+#    #+#             */
/*   Updated: 2023/10/20 23:42:00 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int n)
{
	if (ft_isalpha(n) == 1)
		return (n + 32);
	return (n);
}

/*int	main()
{
	char uppercaseChar[] = "HELLO WORLD!!";
	ft_tolower(uppercaseChar);
	write(STDOUT_FILENO, "\n", 1);
}*/
