/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekoh <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 15:33:57 by ekoh              #+#    #+#             */
/*   Updated: 2023/07/02 16:31:17 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This function checks the syntax of the input string. 
 * It counts the number of occurrences of '4' and '1' in the input string. 
 * If the count of '4' is greater than 2 or the count of '1' is not 4,
 * it returns 0, indicating an error. Otherwise, it returns 1.*/

/* This function checks the input string for valid syntax and stores
   the numeric values in the input array. It returns the number of values
   stored in the array. */

/* If argc is not 2, it means either the program was called without any 
arguments or with an incorrect number of arguments. */

#include <unistd.h>

int	init4by4(int *input);

int	checkvalue(char *input)
{
	int	i;
	int	err;

	i = 0;
	err = 0;
	while (input[i])
	{
		if (input[i] == '4')
			err++;
		i++;
	}
	if (err > 2)
		return (0);
	i = 0;
	err = 0;
	while (input[i])
	{
		if (input[i] == '1')
			err++;
		i++;
	}
	if (err != 4)
		return (0);
	return (1);
}

int	checkinput(char *arg, int *input)
{
	int	i;
	int	out;

	i = 0;
	out = 0;
	if (checkvalue(arg) == 1)
	{
		while (arg[i])
		{
			if ((arg[i] >= '1' && arg[i] <= '4') && ((arg[i + 1] == ' ')
					|| ((arg[i + 1] == 0) && (arg[i - 1] == ' '))))
			{
				input[out] = (arg[i] - '0');
				out++;
				i++;
			}
			if ((arg[i] >= 9 && arg[i] <= 13) || arg[i] == 32)
				i++;
			else
				return (out);
		}
		input[out] = '\0';
		return (out);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	input[16];

	if (argc == 2)
	{
		if (checkinput(argv[1], input) == 16)
			init4by4(input);
		else
			write(1, "\nERROR\nunsuccessful input parsing\n", 35);
	}
	else
		write(1, "\nERROR \nArgument count not 1\n", 30);
	return (0);
}
