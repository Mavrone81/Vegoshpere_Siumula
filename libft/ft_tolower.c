/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:55:06 by sfu               #+#    #+#             */
/*   Updated: 2023/09/15 17:40:15 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	change_lower(char c)
{
	if(c >= 65 && c <= 90)
	{
		return(c - 65 + 97);
	}
	return (c);
}

void	ft_tolower(char* s)
{
	char	lc;
	
	if(*s == '\0')
		return;
	lc = change_lower(*s);
	write (STDOUT_FILENO, &lc, 1);
	ft_tolower(s + 1);
}

int	main()
{
	char uppercaseChar[] = "HELLO WORLD!!";
	ft_tolower(uppercaseChar);
	write(STDOUT_FILENO, "\n", 1);
}
