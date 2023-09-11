/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:24:41 by sfu               #+#    #+#             */
/*   Updated: 2023/09/11 23:05:51 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isalpha(char x)
{
	if(x>= 65 && x<=90 || x>= 97 && x<= 122)
		return(1);
	return(0);
}
/*
int	main()
{
	char ch = ';';
    
    	if (ft_isalpha(ch)) 
	{
        	write(STDOUT_FILENO, "Character is alphabetic.\n", 26);
    	} 
	else 
	{
        	write(STDOUT_FILENO, "Character is not alphabetic.\n", 30);
    	}
}*/
