/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 23:16:17 by sfu               #+#    #+#             */
/*   Updated: 2023/09/11 23:32:42 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isalnum(int c)
{
    return ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int	main() 
{
    char ch = ';';

    if (ft_isalnum(ch)) {
        write(STDOUT_FILENO, "Character is alphanumeric.\n", 28);
    } else {
        write(STDOUT_FILENO, "Character is not alphanumeric.\n", 32);
    }

    return 0;
}
