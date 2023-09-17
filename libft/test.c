/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:15:26 by sfu               #+#    #+#             */
/*   Updated: 2023/09/17 15:55:28 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main()
{
	char buffer[10];
	char *result;

	result = ft_memset(buffer, 'A', 5);
	write(STDOUT_FILENO, "BEZERO\n", 6);
	write(STDOUT_FILENO, result, 5);
	write(STDOUT_FILENO, "\n", 1);

	//return 0;
	
	//int main()
   	 char ch = '5';

	write(STDOUT_FILENO, "ISDIGIT\n", 7);
    	if (ft_isdigit(ch)) 
	{
        	write(STDOUT_FILENO, "Character is a digit.\n", 23);
	} 
	else
	{
        	write(STDOUT_FILENO, "Character is not a digit.\n", 27);
	}

}
