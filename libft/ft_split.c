/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 02:45:02 by sfu               #+#    #+#             */
/*   Updated: 2023/09/30 17:59:57 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(const char *s, char c)
{
	int	i;
	int	j;
	int	k;
	int	len;
	int	count;
	char	**string;
	
	i = 0;
	len = 0;
	count = 0;
	if (s[i] == 0)
		return (NULL);
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] && s[i] == c)
			count++;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] !=c)
			i++;
	}
	string = (char **)malloc((count + 1) * sizeof(char *));
	string[count] = NULL;
	i = 0;
	j = 0;
	while (s[i])
	{
		len = 0;
		k = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			len++;
		}
		string[j] = (char *)malloc(len + 1);
		while (len > 0)
		{
			string[j][k] = s[i - len];
			k++;
			len--;
		}
		string[j][k] = '\0';
		j++;
	}
	return (string);
}

// Function to print the result of ft_split
void printResult(char **result) {
    if (!result) {
        printf("Error: Memory allocation failed\n");
        return;
    }

    for (int i = 0; result[i] != NULL; i++) {
        printf("%s\n", result[i]);
        free(result[i]);
    }
    free(result);
}
/*
int main() {
    // Test Case 1: Basic Test
    const char *input1 = "This,is,a,test";
    char **result1 = ft_split(input1, ',');
    printf("Test Case 1:\n");
    printResult(result1);
    printf("\n");

    // Test Case 2: Empty String
    const char *input2 = "";
    char **result2 = ft_split(input2, ',');
    printf("Test Case 2:\n");
    printResult(result2);
    printf("\n");

    // Test Case 3: String with No Delimiter
    const char *input3 = "No,Delimiter,Here";
    char **result3 = ft_split(input3, ';');
    printf("Test Case 3:\n");
    printResult(result3);
    printf("\n");

    // Test Case 4: String with Repeated Delimiters
    const char *input4 = "Multiple,,,Delimiters";
    char **result4 = ft_split(input4, ',');
    printf("Test Case 4:\n");
    printResult(result4);
    printf("\n");

    // Test Case 5: NULL String
    char **result5 = ft_split(NULL, ',');
    printf("Test Case 5:\n");
    printResult(result5);
    printf("\n");

    return 0;
}*/