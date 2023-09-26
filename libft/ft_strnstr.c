/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:19:58 by sfu               #+#    #+#             */
/*   Updated: 2023/09/24 15:45:12 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	len;

	len = ft_strlen(needle);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && n-- >= len)
	{
		if (*haystack == *needle)
			return ((char *)haystack);
		++haystack;
	}
	return(NULL);
}/*
int main() {
    const char *haystack = "Hello, World!";
    const char *needle = "el";
    size_t len = 13; // Search within the first 13 characters

    char *result = ft_strnstr(haystack, needle, len);

    if (result != NULL) {
        write(1, "Substring found: ", 17);
        write(1, result, sizeof(result) +2); // Print the result
        write(1, "\n", 1);
    } else {
        write(1, "Substring not found\n", 21);
    }

    free(result);
    return 0;
}*/
