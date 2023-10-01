/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 18:03:14 by sfu               #+#    #+#             */
/*   Updated: 2023/09/30 21:54:52 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	//char	*string = "this, is, a, test";
	int	nn;
	int	len;
	int	i;
	char	*str;
	
	//printf("%s", str);
	len = 0;
	nn = n;
	while (nn > 0)
	{

		if (!ft_isdigit(n))
		{
			len++;
			nn = nn/10;
		}
		else
			break;
	}
	str = malloc(len);
	if (n <= 0)
		return (NULL);
	i = 0;
	str[len] = '\0';
	while (n)
	{
		nn = n % 10;
		n = n/10;
		str[len - 1] = (nn + '0');
		len--;
	}
	return (str);
}

int main() 
{
    // Example usage
    int number = 123451234512345123451234512345123451234512345123451234512345;
    //char *str = ft_itoa(number);
    printf("The string representation of %d is: %s\n", number, ft_itoa(number));

    return 0;
}
