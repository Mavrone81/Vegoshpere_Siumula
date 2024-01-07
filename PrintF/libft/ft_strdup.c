/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 21:17:18 by sfu               #+#    #+#             */
/*   Updated: 2023/09/26 01:02:45 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*buffer;

	len = ft_strlen(s);
	buffer = (char *)malloc(len + 1);
	if (!buffer)
		return (NULL);
	ft_strlcpy(buffer, s, len + 1);
	return (buffer);
}
/*
int main() 
{
    const char *originalString = "Hello, World!";
    char *copiedString;

    // Duplicate the original string
    copiedString = ft_strdup(originalString);

    if (copiedString != NULL) {
        write(STDOUT_FILENO, "Original string: ", 17);
        write(STDOUT_FILENO, originalString, ft_strlen(originalString));
        write(STDOUT_FILENO, "\n", 1);

        write(STDOUT_FILENO, "Copied string: ", 15);
        write(STDOUT_FILENO, copiedString, ft_strlen(copiedString));
        write(STDOUT_FILENO, "\n", 1);

        // Modify the copied string
        ft_strlcpy(copiedString, "Modified!", 8);

        write(STDOUT_FILENO, "Modified string: ", 16);
        write(STDOUT_FILENO, copiedString, ft_strlen(copiedString));
        write(STDOUT_FILENO, "\n", 1);
    } else {
        write(STDOUT_FILENO, "Memory allocation failed.\n", 26);
    }
    free(copiedString);
    return 0;
}*/
