/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 20:55:03 by sfu               #+#    #+#             */
/*   Updated: 2023/10/21 03:33:27 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	results;
	int	sign;
	int	i;

	results = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		results = (results * 10) + (str[i] - '0');
		i++;
	}
	return (results * sign);
}
/*
int main() 
{
    const char *str = "123";
    int num = ft_atoi(str);
    write(STDOUT_FILENO, "Parsed number: ", 15);
    write(STDOUT_FILENO, &num, sizeof(int));
    write(STDOUT_FILENO, "\n", 1);
    return 0;
}*/
