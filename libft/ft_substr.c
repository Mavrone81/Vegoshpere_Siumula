/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 00:00:53 by sfu               #+#    #+#             */
/*   Updated: 2023/10/21 00:24:03 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*static int	ft_check_special(unsigned int ch)
{
	if ((ch >= 33 && ch <= 47) || (ch >= 58 && ch <= 64))
		return (0);
	if ((ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126))
		return (0);
	return (1);
}*/
// change on use of check to str duplicate

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buffer;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	buffer = (char *)malloc(len + 1);
	if (!buffer)
		return (NULL);
	ft_strlcpy(buffer, s + start, len + 1);
	return (buffer);
}
/*
void test_substr() {
    const char *inputString = "Hello, World!";
    char *result;

    // Test 1: Valid substring
    result = ft_substr(inputString, 7, 5); // Starting at index 7, length 5
    if (result != NULL) {
        printf("Test 1: Substring 'World': %s\n", result);
        free(result);
    } else {
        printf("Test 1 failed: Substring not found or memory allocation failed.\n");
    }

    // Test 2: Invalid start index
    result = ft_substr(inputString, -1, 5); // Invalid start index
    if (result == NULL) {
        printf("Test 2: Invalid start index handled correctly.\n");
    } else {
        printf("Test 2 failed: Expected NULL for invalid start index, but got: %s\n", result);
        free(result);
    }

    // Test 3: Start index beyond string length
    result = ft_substr(inputString, 15, 5); // Start index beyond string length
    if (result == NULL) {
        printf("Test 3: Start index beyond string length handled correctly.\n");
    } else {
        printf("Test 3 failed: Expected NULL for start index beyond string length, but got: %s\n", result);
        free(result);
    }
    // Test 4: Start index beyond string length
    result = ft_substr("", 1, 5); // Start index beyond string length
    if (result == NULL) {
        printf("Test 4: Start index beyond string length handled correctly.\n");
    } else {
        printf("Test 4 failed: Expected NULL for start index beyond string length, but got: %s\n", result);
        free(result);

    }
    // Test 5: Start index beyond string length
    result = ft_substr(inputString, 1, 0); // Start index beyond string length
    if (result == NULL) {
        printf("Test 5: Start index beyond string length handled correctly.\n");
    } else {
        printf("Test 5 failed: Expected NULL for start index beyond string length, but got: %s\n", result);
        free(result);

    }
    // Test 6: Start index beyond string length
    result = ft_substr(inputString, '!', 8); // Start index beyond string length
    if (result == NULL) {
        printf("Test 6: Start index beyond string length handled correctly.\n");
    } else {
        printf("Test 6 failed: Expected NULL for start index beyond string length, but got: %s\n", result);
        free(result);
    }

}

int main() {
    test_substr();
    return 0;
}*/
