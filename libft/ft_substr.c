/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 00:00:53 by sfu               #+#    #+#             */
/*   Updated: 2023/09/27 02:47:52 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_check_special(unsigned int ch)
{
	if ((ch >= 33 && ch <= 47) || (ch >= 58 && ch <= 64))
		return (0);
	if ((ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126))
		return (0);
	return (1);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;

	if (start >= ft_strlen(s))
		return (NULL);
	str = malloc(len + 1);
	if (s == NULL)
		return (NULL);
	if (len == 0)
		return (NULL);
	if (ft_check_special(start) == 0)
		return (NULL);
	ft_strlcpy(str, s + start, len);
	str[len] = '\0';
	return (str);

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
