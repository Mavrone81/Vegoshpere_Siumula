/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 14:30:36 by ekoh              #+#    #+#             */
/*   Updated: 2023/07/02 17:05:07 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	up_down(int board[4][4], int col, int num)
{
	int	r;
	int	max;
	int	counter;

	r = 0;
	counter = 1;
	max = board[r][col];
	while (r < 4)
	{
		if (board[r][col] > max)
		{
			max = board[r][col];
			counter++;
		}
		r++;
	}
	if (counter == num)
		return (1);
	return (0);
}

int	down_up(int board[4][4], int col, int num)
{
	int	r;
	int	max;
	int	counter;

	r = 3;
	counter = 1;
	max = board[r][col];
	while (r >= 0)
	{
		if (board[r][col] > max)
		{
			max = board[r][col];
			counter++;
		}
		r--;
	}
	if (counter == num)
		return (1);
	return (0);
}

int	left_right(int board[4][4], int row, int num)
{
	int	r;
	int	max;
	int	counter;

	r = 0;
	counter = 1;
	max = board[row][r];
	while (r < 4)
	{
		if (board[row][r] > max)
		{
			max = board[row][r];
			counter++;
		}
		r++;
	}
	if (counter == num)
		return (1);
	return (0);
}

int	right_left(int board[4][4], int row, int num)
{
	int	r;
	int	max;
	int	counter;

	r = 3;
	counter = 1;
	max = board[row][r];
	while (r >= 0)
	{
		if (board[row][r] > max)
		{
			max = board[row][r];
			counter++;
		}
		r--;
	}
	if (counter == num)
		return (1);
	return (0);
}

int	verify(int board[4][4], int *in_num)
{
	int	i;

	i = 0;
	while (in_num[i])
	{
		if (i >= 0 && i <= 3)
			if (!up_down(board, i, in_num[i]))
				return (0);
		if (i >= 4 && i <= 7)
			if (!down_up(board, i - 4, in_num[i]))
				return (0);
		if (i >= 8 && i <= 11)
			if (!left_right(board, i - 8, in_num[i]))
				return (0);
		if (i >= 12 && i <= 15)
			if (!right_left(board, i - 12, in_num[i]))
				return (0);
		i++;
	}
	return (1);
}
