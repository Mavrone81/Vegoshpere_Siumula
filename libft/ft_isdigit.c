/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:10:13 by sfu               #+#    #+#             */
/*   Updated: 2023/09/17 19:30:09 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return(c >= '0' && c <= '9');
}
/*
int main() 
{
    char ch = '5';

    if (ft_isdigit(ch)) {
        write(STDOUT_FILENO, "Character is a digit.\n", 23);
    } else {
        write(STDOUT_FILENO, "Character is not a digit.\n", 27);
    }

    return 0;
}*/
