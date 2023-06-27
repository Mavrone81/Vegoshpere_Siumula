/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:24:10 by ykai              #+#    #+#             */
/*   Updated: 2023/06/27 23:37:42 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int main() {
	char c1[] = "dawg!";
	char c2[20];// Declare b array with a size of 20;
	
	printf("%s, %s\n", c1,c2); // Use %s to print a string
	ft_strcpy(c1,c2);
	
	 printf("%s, %s\n", c1,c2); // Use %s to print a string
}
*/
