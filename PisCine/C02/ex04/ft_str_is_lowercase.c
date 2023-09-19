/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykai <ykai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:30:59 by ykai              #+#    #+#             */
/*   Updated: 2023/06/25 18:31:00 by ykai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main()
{
    char a[] = "aaazzZZZ";
    
    int result = ft_str_is_lowercase(a);
    
    printf("%d\n", result); // Print the result: 0 for non-alpha, 1 for alpha
    
    return 0;
}
*/
