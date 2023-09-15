/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 20:24:19 by sfu               #+#    #+#             */
/*   Updated: 2023/09/15 00:45:13 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char* des, const char* sr, size_t size)
{
	size_t	des_len;
	size_t	full_len;

	des_len = ft_strlen(des);
	full_len = size - des_len -1;
	if(full_len == 0 || *sr == '\0')
	{
		return(des_len + ft_strlen(sr));
	}
	else
	{
		des[des_len] = *sr;
		des[des_len + 1] = '\0';
		return (1 + ft_strlcat(des +1, sr + 1, full_len));
	}
}
/*
int main() {
    char dest[20] = "Hello, ";
    const char *src = "World!";
    size_t size = sizeof(dest);

    size_t result = ft_strlcat(dest, src, size);

    if (result < size) {
        // Concatenation was successful
        write(STDOUT_FILENO, dest, result);
        write(STDOUT_FILENO, "\n", 1);
    } else {
        // Destination buffer was too small
        write(STDOUT_FILENO, "Destination buffer too small.\n", 31);
    }

    return 0;
}*/
