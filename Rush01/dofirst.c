/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dofirst.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:11:46 by ekoh              #+#    #+#             */
/*   Updated: 2023/07/02 17:37:03 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		clearance(int board[4][4], int *input);

void	ft_putboard(int board[4][4]);

void	any4_1(int board[4][4], int *input, int pos)
{
	int	fill;

	fill = 0;
	while ((input[pos]) && pos <= 15)
	{
		if ((input[pos] == 4) && ((pos >= 8 && pos <= 11)))
		{
			while (fill < 4)
			{
				board[pos % 4][fill] = fill + 1;
				fill++;
			}
			fill = 4;
		}
		if ((input[pos] == 4) && ((pos >= 12 && pos <= 15)))
		{
			while (fill > 0)
			{
				board[pos % 4][4 - fill] = fill;
				fill--;
			}
		}
		pos++;
	}
}

void	any4_0(int board[4][4], int *input)
{
	int	pos;
	int	fill;

	pos = 0;
	fill = 0;
	while ((input[pos]) && pos < 8, pos++)
	{
		if ((input[pos] == 4) && ((pos >= 0 && pos <= 3)))
		{
			while (fill < 4, fill++)
			{
				board[fill][pos] = fill + 1;
			}
			fill = 4;
		}
		if ((input[pos] == 4) && ((pos >= 4 && pos <= 7)))
		{
			while (fill > 0)
			{
				board[4 - fill][(pos % 4)] = fill;
				fill--;
			}
		}
	}
	any4_1(board, input, pos);
}

void	any1(int board[4][4], int *input)
{
	int	pos;

	pos = 0;
	while (input[pos])
	{
		if ((input[pos] == 1) && ((pos >= 0) && (pos <= 3)))
			board[0][pos] = 4;
		if ((input[pos] == 1) && ((pos >= 4) && (pos <= 7)))
			board[3][pos - 4] = 4;
		if ((input[pos] == 1) && ((pos >= 8) && (pos <= 11)))
			board[pos - 8][0] = 4;
		if ((input[pos] == 1) && ((pos >= 12) && (pos <= 15)))
			board[pos - 12][3] = 4;
		pos++;
	}
	any4_0(board, input);
}

int	init4by4(int *input)
{
	int	row;
	int	col;
	int	board[4][4];

	row = 0;
	col = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			board[row][col] = 0;
			col++;
		}
		row++;
	}
	any1(board, input);
	if ((clearance(board, input)) == 1)
		ft_putboard(board);
	else
		write(1, "\n No Solution \n", 16);
	return (0);
}
