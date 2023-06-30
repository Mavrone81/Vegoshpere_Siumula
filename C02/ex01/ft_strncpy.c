/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 18:14:17 by ykai              #+#    #+#             */
/*   Updated: 2023/06/27 23:39:40 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, const int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int main() {
	char a[] = "dawg!";
	char b[20];// Declare b array with a size of 20;
	
	printf("%s, %s\n", a,b); // Use %s to print a string
	ft_strcpy(b,a);
	
	 printf("%s, %s\n", a,b); // Use %s to print a string
}
*/
