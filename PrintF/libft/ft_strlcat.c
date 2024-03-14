/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 20:24:19 by sfu               #+#    #+#             */
/*   Updated: 2023/10/20 23:27:53 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dsize)
{
	size_t	i;

	i = 0;
	while (*dest && i < dsize)
	{
		++i;
		++dest;
	}
	while (*src && i + 1 < dsize)
	{
		*dest = *src;
		++dest;
		++src;
		++i;
	}
	if (i < dsize)
		*dest = 0;
	while (*src)
	{
		++i;
		++src;
	}
	return (i);
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
