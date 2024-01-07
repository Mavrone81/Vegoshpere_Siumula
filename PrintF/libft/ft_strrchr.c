/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:14:26 by sfu               #+#    #+#             */
/*   Updated: 2023/10/22 00:27:52 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			last = (char *)s;
		s++;
	}
	if (c == '\0' || *s == (char)c)
		return ((char *)s);
	return (last); 
}
/*
int main() 
{
    char str[] = "Hello, World!";
    char *result = ft_strrchr(str, 'd');

    if (result != NULL) {
        char output[2] = { *result, '\n' };
        write(STDOUT_FILENO, output, sizeof(output));
    } else {
        char notFound[] = "Character not found\n";
        write(STDOUT_FILENO, notFound, sizeof(notFound));
    }

    if (result != NULL) 
        printf("Character 'd' found at index: %ld\n", result - str);
    else 
        printf("Character not found\n");
    return 0;
}*/
