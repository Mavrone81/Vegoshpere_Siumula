/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhaing <mkhaing@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:34:29 by mkhaing           #+#    #+#             */
/*   Updated: 2023/06/25 23:21:35 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	rush(int x, int y);

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	if (*argv[1] == '-' || *argv[2] == '-')
	{
		write(1, "Usage: ./a.out of limit for arg1 arg2\n", 39);
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		rush(x, y);
	}
	return (0);
}
