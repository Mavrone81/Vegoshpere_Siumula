/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 00:53:04 by sfu               #+#    #+#             */
/*   Updated: 2023/06/28 01:42:09 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	char			*src_ptr;
	unsigned int	copy_len;
	unsigned int	i;

	*src_ptr = src;
	src_len = 0;
	while (*src_ptr != '\0')
	{	
		src_ptr++;
		src_len++;
	}
	if (size > 0)
	{
		copy_len = size - 1;
	}
	else
	{
		copy_len = 0;
	}
	while (i < copy_len && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
/*
int main() {
    char dest[20];
    char src[] = "Hello, world!";

    unsigned int len = ft_strlcpy(dest, src, sizeof(dest));

    write(STDOUT_FILENO, "Copied string: ", 15);
    write(STDOUT_FILENO, dest, len);
    write(STDOUT_FILENO, "\n", 1);

    write(STDOUT_FILENO, "Length of source string: ", 25);
    char len_str[20];
    int len_bytes = 0;
    int len_remaining = len;
    while (len_remaining > 0) {
        len_bytes = write(STDOUT_FILENO, src, len_remaining);
        if (len_bytes == -1) {
            write(STDERR_FILENO, "Error writing output.\n", 22);
            _exit(EXIT_FAILURE);
        }
        len_remaining -= len_bytes;
    }
    write(STDOUT_FILENO, "\n", 1);

    return 0;
}*/
