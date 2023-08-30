/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhaing <mkhaing@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 17:09:37 by mkhaing           #+#    #+#             */
/*   Updated: 2023/06/25 23:29:53 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	draw_a(int size)
{
	int	ax;

	ax = size;
	while (ax != 0)
	{
		if (ax == 1)
		{
			ft_putchar('C');
		}
		else if (ax == size)
		{
			ft_putchar('A');
		}
		else
		{
			ft_putchar('B');
		}
		ax--;
	}
}

void	draw_b(int size)
{
	int	bx;

	bx = size;
	while (bx != 0)
	{
		if (bx == 1)
		{
			ft_putchar('B');
		}
		else if (bx == size)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(' ');
		}
		bx--;
	}
}

void	draw_c(int size)
{
	int	cx;

	cx = size;
	while (cx != 0)
	{
		if (cx == 1)
		{
			ft_putchar('A');
		}
		else if (cx == size)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		cx--;
	}
}

void	rush(int x, int y)
{
	int	ty;

	ty = y;
	while (ty != 0)
	{
		if (ty == 1)
		{
			draw_c(x);
		}
		else if (ty == y)
		{
			draw_a(x);
		}
		else
		{
			draw_b(x);
		}
		ft_putchar('\n');
		ty--;
	}
}
