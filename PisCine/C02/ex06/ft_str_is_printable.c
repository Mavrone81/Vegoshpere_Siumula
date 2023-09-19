/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykai <ykai@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:56:16 by ykai              #+#    #+#             */
/*   Updated: 2023/06/27 23:34:06 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 32 || str[i] > 126))
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
    char a[] = "";
    
    int result = ft_str_is_printable(a);
    
    printf("%d\n", result); // Print the result: 0 for non-alpha, 1 for alpha
    
    return 0;
}*/
