/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:24:41 by sfu               #+#    #+#             */
/*   Updated: 2023/10/21 03:09:35 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int x)
{
	if (x >= 65 && x <= 90)
		return(1);
	else if (x >= 'a' && x <= 'z')
		return (2);
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
