/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:56:14 by sfu               #+#    #+#             */
/*   Updated: 2023/09/12 00:01:51 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isprint(int c) 
{
	return (c >= 32 && c <= 126);
}

int	main() 
{
    char ch = 31;

    if (ft_isprint(ch)) {
        write(STDOUT_FILENO, "Character is ASCII.\n", 20);
    } else {
        write(STDOUT_FILENO, "Character is not ASCII.\n", 24);
    }

    return 0;
}
