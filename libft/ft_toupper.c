/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 00:45:28 by sfu               #+#    #+#             */
/*   Updated: 2023/10/20 23:48:49 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int n)
{
	if (ft_isalpha(n) == 2)
		return (n - 32);
	return (n);
}

/*int main() 
{
    char input[] = "Hello, World!";
    
    // Convert the string to uppercase and print it
    ft_toupper(input);
    write (STDOUT_FILENO, "\n", 1);

    return 0;
}*/
