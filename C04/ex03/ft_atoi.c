/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:24:10 by ykai              #+#    #+#             */
/*   Updated: 2023/07/02 23:21:33 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int    ft_atoi(char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
            str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
        i++;
      if (str[i] == '-' || str[i] == '+')
        if (str[i] == '-')
        sign = -sign;
    while (str[i] != '\0' && str[i] <= '9' && str[i] >= '0')
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return (result * sign);
}
/*
int main()
{
    char *str = "   -1234";
    int a = ft_atoi(str);
    printf("%d", a);
    return 0;
}*/