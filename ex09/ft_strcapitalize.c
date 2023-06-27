/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykai <ykai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 13:11:24 by ykai              #+#    #+#             */
/*   Updated: 2023/06/28 00:02:13 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		cap;
	char	a;

	i = 0;
	cap = 1;
	while (str[i] != '\0')
	{
		a = str[i];
		if (cap == 1 && a >= 'a' && a <= 'z')
			str[i] -= 32;
		else if (cap == 0 && a >= 'A' && a <= 'Z')
			str[i] += 32;
		if (a < '0' || (a > '9' && a < 'A') || (a > 'Z' && a < 'a') || a > 'z')
			cap = 1;
		else
			cap = 0;
		i++;
	}
	return (str);
}
/*
int main ()
{
    char str[] = "dAwGdAwG";
    ft_strcapitalize(str);
    
    write(1,str,sizeof(str)-1);
 }
*/
