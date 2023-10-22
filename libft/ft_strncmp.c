/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 20:53:40 by sfu               #+#    #+#             */
/*   Updated: 2023/10/21 03:55:45 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	while (*str1 && *str2 && n && (*str1 == *str2))
	{
		++str1;
		++str2;
		--n;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}
/*
int main() {
    const char* str1 = "Hello, Universe";
    const char* str2 = "Hello, World";
    int result = ft_strncmp(str1, str2, 20); // Compare first 6 characters

    if (result == 0) {
        write(1, "Strings are equal\n", 18);
    } else if (result < 0) {
        write(1, "str1 is less than str2\n", 24);
    } else {
        write(1, "str1 is greater than str2\n", 27);
    }

    return 0;
}*/
