/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 21:04:55 by sfu               #+#    #+#             */
/*   Updated: 2023/10/21 03:26:22 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *de, const void *sr, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *) de;
	s = (const char *) sr;
	if (d > s)
	{
		d += n;
		s += n;
		while (n--)
			*(--d) = *(--s);
	}
	else if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else if (s == NULL)
		return (NULL);
	return (de);
}
/*
int	main()
{
	char source[] = "Hello World";
    	char dest[20];

	ft_memmove(dest, source, 13);
	dest[13] = '\n';
	write(STDOUT_FILENO, dest, 14);  // Output should be "Hello, World!"

	return 0;
}*/
