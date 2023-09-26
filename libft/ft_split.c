/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 02:45:02 by sfu               #+#    #+#             */
/*   Updated: 2023/09/26 03:15:21 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// this is, a test, for split.
char	**ft_split(const char *s, char c)
{
	int	i;
	int	len;
	int	old_i;

	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		while (i < len)
		{
			if (ft_strchr(c, s[i]) = NULL)
				break;
			i++;
		}
		old_i = i;
		while (i < len)
		{
			
