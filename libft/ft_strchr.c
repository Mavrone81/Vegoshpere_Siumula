/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:40:37 by sfu               #+#    #+#             */
/*   Updated: 2023/09/17 01:46:21 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char*	ft_strchr(const char *s, int c)
{
	if (*s == '\0')
		return (NULL);
	if (*s == c)
		return ((char*)s);
	ft_strchr(s + 1, c);
	return (0);
}
/*
int	main()
{
	char	stringtest[] = "Hello World";
	char	str = 'o';

	const char*	ret = ft_strchr(stringtest, str);

	if (ret != NULL)
	{
		char	output[] = { *ret, '\n' };
		write (STDOUT_FILENO, output, sizeof(output));
	}
	else
	{
		char	notfound[] = { "this is not found\n" };
		write (STDOUT_FILENO, notfound, sizeof(notfound));
	}
}*/
