/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:19:58 by sfu               #+#    #+#             */
/*   Updated: 2023/09/23 14:28:31 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    size_t      needle_len;
    const char  *haystack_ptr;
    const char  *haystack_substr;
    const char  *needle_substr;

    haystack_ptr = haystack;
    needle_len = ft_strlen(needle);
    if (needle_len == 0)
        return (char *)haystack;
    while (n > 0 && *haystack_ptr != '\0')
    {
        haystack_substr = haystack_ptr;
        needle_substr = needle;
        while (*haystack_substr == *needle_substr && *needle_substr != '\0' && n > 0)
        {
            haystack_substr++;
            needle_substr++;
            n--;
        }
        if (*needle_substr == '\0')
            return((char *)haystack_ptr);
    }
    return(NULL);
}
int main() {
    const char *haystack = "Hello, World!";
    const char *needle = "World";
    size_t len = 13; // Search within the first 13 characters

    char *result = ft_strnstr(haystack, needle, len);

    if (result != NULL) {
        write(1, "Substring found: ", 17);
        write(1, result, 5); // Print the first 5 characters of the found substring
        write(1, "\n", 1);
    } else {
        write(1, "Substring not found\n", 21);
    }

    return 0;
}