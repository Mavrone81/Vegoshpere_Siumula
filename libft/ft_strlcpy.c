/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:33:25 by sfu               #+#    #+#             */
/*   Updated: 2023/09/14 20:22:57 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char* des, const char *sr, size_t n)
{
	if (n == 0)
		return(ft_strlen(sr));
	if (*sr == '\0')
	{
		*des = '\0';
		return (0);
	}
	*des = *sr;
	return (1 + ft_strlcpy(des + 1, sr + 1, n - 1));
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
