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

static int	count_w(char *s, char c)
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

char **split(char *s, char c)
{
	int		w_count;
	char	**result_list;
	int		i;

	i = 0;
	w_count = count_w(s, c);
	if (!w_count)
		exit (1);
	result_list = malloc(sizeof(char*) * (size_t)(w_count + 2));
	if (!result_list)
		return (NULL);
	while (w_count-- >= 0)
	{
		if (i == 0)
		{
			result_list[i] = malloc(sizeof(char));
			if (!rsult_list[i])
				return (NULL);
			result_list[i++][0] = '\0';
			continue ;
		}
		result_list[i++] = get_next_word(s, c);
	}
	result_list[i] = NULL;
	return (result_list);
}
