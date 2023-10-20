/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 13:39:45 by sfu               #+#    #+#             */
/*   Updated: 2023/10/20 23:58:06 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t a)
{
	size_t	i;

	i = -1;
	while (++i < a)
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
	return (0);
}
/*int main() {
    const char *str1 = "Hello, World!";
    const char *str2 = "Hello, Universe!";
    size_t n = 20; // Compare the first 5 bytes

    int result = ft_memcmp(str1, str2, n);

    if (result == 0) {
        write(STDOUT_FILENO, "Memory is equal up to 20 bytes.\n", 33);
    } else if (result < 0) {
        write(STDOUT_FILENO, "Memory in str1 is less than str2 up to 20 bytes.\n", 50);
    } else {
        write(STDOUT_FILENO, "Memory in str1 is greater than str2 up to 20 bytes.\n", 53);
    }

    return 0;
}*/
