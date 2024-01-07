/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 15:53:45 by sfu               #+#    #+#             */
/*   Updated: 2023/10/21 03:56:39 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len1;
	size_t	len2;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = (char *)ft_calloc(len1 + len2 + 1, sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, len1 + 1);
	ft_strlcpy(result + len1, s2, len2 + 1);
	return (result);
}
/*
int main() {
    // Test Case 1: Basic Test
    char *result1 = ft_strjoin("Hello, ", "World!");
    printf("Test Case 1:\n");
    printf("Result: %s\n", result1);
    free(result1);

    // Test Case 2: Empty Strings
    char *result2 = ft_strjoin("", "");
    printf("Test Case 2:\n");
    printf("Result: %s\n", result2);
    free(result2);

    // Test Case 3: One Empty String
    char *result3 = ft_strjoin("Non-empty", "");
    printf("Test Case 3:\n");
    printf("Result: %s\n", result3);
    free(result3);

    // Test Case 5: Large Strings
    char *longString1 = "This is a very long string.";
    char *longString2 = " Another long string.";
    char *result5 = ft_strjoin(longString1, longString2);
    printf("Test Case 5:\n");
    printf("Result: %s\n", result5);
    free(result5);


    Test Case 4: Null Pointers
    char *result4 = ft_strjoin(NULL, "World!");
    printf("Test Case 4:\n");
    if (result4 == NULL) {
        printf("Result is NULL as expected.\n");
    } else {
        printf("Result: %s (unexpected)\n", result4);
    }
    return 0;
}*/
