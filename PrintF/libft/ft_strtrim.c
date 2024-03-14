/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 00:22:18 by sfu               #+#    #+#             */
/*   Updated: 2023/10/21 03:58:38 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	init(const char *str, char check)
{
	while (*str && check != *str)
		str++;
	return (check == *str);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	first;
	size_t	last;

	first = 0;
	last = ft_strlen(s1);
	if (!set && !s1)
		return (NULL);
	while (init(set, s1[first]))
		first++;
	if (first == last)
		return (ft_strdup(""));
	while (init(set, s1[last - 1]))
		last--;
	return (ft_substr(s1, first, last - first));
}
/*
int	main()
{
	char	test[] = "**test**";

	printf("%s\n", ft_strtrim(test, "*t"));
	return (0);
}*/
