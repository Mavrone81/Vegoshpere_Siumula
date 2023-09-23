/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 13:39:45 by sfu               #+#    #+#             */
/*   Updated: 2023/09/23 13:48:50 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return(0);
	if (*s1 == *s2)
		return(*s1 - *s2);
	return(ft_memcmp((char *)s2 + 1, (char *)s2 + 1, n - 1));
}
int main() {
    const char *str1 = "Hello, World!";
    const char *str2 = "Hello, Universe!";
    size_t n = 5; // Compare the first 5 bytes

    int result = ft_memcmp(str1, str2, n);

    if (result == 0) {
        write(STDOUT_FILENO, "Memory is equal up to 5 bytes.\n", 32);
    } else if (result < 0) {
        write(STDOUT_FILENO, "Memory in str1 is less than str2 up to 5 bytes.\n", 50);
    } else {
        write(STDOUT_FILENO, "Memory in str1 is greater than str2 up to 5 bytes.\n", 53);
    }

    return 0;
}
