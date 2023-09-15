/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 00:45:28 by sfu               #+#    #+#             */
/*   Updated: 2023/09/15 01:33:30 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_check_upper(char c)
{
	if (c >= 'a' && c <= 122)
		return (c - 97 + 65);
	else
		return (c);
}

void	ft_toupper(char* s)
{
	char pc;

	if (*s != '\0')
	{
		pc = ft_check_upper(*s);
		write (STDOUT_FILENO, &pc, 1);
		ft_toupper(s + 1);
	}
}

int main() 
{
    char input[] = "Hello, World!";
    
    // Convert the string to uppercase and print it
    ft_toupper(input);
    write (STDOUT_FILENO, "\n", 1);

    return 0;
}
