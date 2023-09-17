/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 01:17:57 by sfu               #+#    #+#             */
/*   Updated: 2023/09/17 19:14:33 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void*	ft_memset(void* a, int c, size_t n)
{
	unsigned char*	arr;
	unsigned char 	ac;

	arr = a;
	ac = c;
	while(n>0)
	{
		arr[n-1] = ac;
		n--;
	}
	return(a);
}
/*
int main() 
{
	char buffer[10];
	char *result;

	result = ft_memset(buffer, 'A', 5);
	write(STDOUT_FILENO, result, 5);
	write(STDOUT_FILENO, "\n", 1);

	return 0;
}*/
