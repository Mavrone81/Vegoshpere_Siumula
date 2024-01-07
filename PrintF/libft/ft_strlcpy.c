/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:33:25 by sfu               #+#    #+#             */
/*   Updated: 2023/10/20 23:26:22 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dsize)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	i = 0;
	if (dsize == 0)
		return (src_len);
	while (i + 1 < dsize && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (src_len);
}

/*
int main() {
    char source[] = "Hello, World!";
    char dest[20];

    size_t len = ft_strlcpy(dest, source, sizeof(dest));
    write(STDOUT_FILENO, dest, len);  // Output should be "Hello, World"
    write(1, "\n", 1);

    return 0;
}*/
