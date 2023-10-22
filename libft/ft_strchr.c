/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:40:37 by sfu               #+#    #+#             */
/*   Updated: 2023/10/21 04:19:43 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		++s;
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
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
