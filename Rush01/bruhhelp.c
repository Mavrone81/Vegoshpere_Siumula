/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bruhhelp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 16:12:48 by ekoh              #+#    #+#             */
/*   Updated: 2023/07/02 17:03:32 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	verify(int board[4][4], int *input);

int	any0(int board[4][4], int *r, int *c)
{
	*r = 0;
	*c = 0;
	while (*r < 4)
	{
		*c = 0;
		while (*c < 4)
		{
			if (board[*r][*c] == 0)
				return (1);
			*c += 1;
		}
		*r += 1;
	}
	return (0);
}

int	okcol(int board[4][4], int col, int num)
{
	int	row;

	row = 0;
	while (row < 4)
	{
		if (board[row][col] == num)
			return (0);
		row++;
	}
	return (1);
}

int	okrow(int board[4][4], int row, int num)
{
	int	col;

	col = 0;
	while (col < 4)
	{
		if (board[row][col] == num)
			return (0);
		col++;
	}
	return (1);
}

int	okboard(int board[4][4], int r, int c, int num)
{
	if (((okrow(board, r, num)) && (okcol(board, c, num))
			&& (board[r][c] == 0)))
		return (1);
	return (0);
}

int	clearance(int board[4][4], int *input)
{
	int	row;
	int	col;
	int	n;

	n = 1;
	if ((any0(board, &row, &col) == 0) && (verify(board, input) == 1))
		return (1);
	while (n <= 4)
	{
		if (okboard(board, row, col, n))
		{
			board[row][col] = n;
			if (clearance(board, input) == 1)
				return (1);
			board[row][col] = 0;
		}
		n++;
	}
	return (0);
}
