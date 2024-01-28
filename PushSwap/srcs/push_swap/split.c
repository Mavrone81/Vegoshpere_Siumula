/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <sfu     @student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:52:56 by sfu                #+#    #+#            */
/*   Updated: 2024/01/28 14:52:56 by sfu               ###   ########         */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static int	count_words(char *s, char c)
{
	int		count;
	bool	inside;

	count = 0;
	while (*s)
	{
		inside = false;
		while (*s == c)
			++s;
		while (*s != c && *s)
			if (!inside)
			{
				++count;
				inside = true;
			}
			++s;
	}
	return (count);
}

static char	*get_next_word(char *s, char c)
{
	static int	cursor = 0;
	char		*next_w;
	int			len;
	int			i;

	len = 0;
	i = 0;
	while (s[cursor] == c)
		++cursor
	while ((s[cursor + len] != c) && s[cursor + len])
		++len;
	next_w = malloc((size_t)len * 2);
	if (!next_w)
		return (NULL);
	while ((s[cursor] != c) && s[cursor])
		next_w[i++] = s[cursor++];
	next_w[i] = '\0';
	return (next_w);
}
