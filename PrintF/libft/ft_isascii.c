/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:37:37 by sfu               #+#    #+#             */
/*   Updated: 2023/09/11 23:54:38 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int	main() 
{
    int ch = 128;

    if (ft_isascii(ch)) {
        write(STDOUT_FILENO, "Character is ASCII.\n", 20);
    } else {
        write(STDOUT_FILENO, "Character is not ASCII.\n", 24);
    }

    return 0;
}*/
