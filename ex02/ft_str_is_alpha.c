/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygoavec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 22:21:28 by ygoavec           #+#    #+#             */
/*   Updated: 2019/07/07 22:21:35 by ygoavec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function that returns 1 if the string given as a parameter contains only alphabetical characters, and 0 if it contains any other character.

int		ft_str_is_alpha(char *str)
{
    int	i;
    int	is_alpha;

    i = 0;
    is_alpha = 1;
    while (str[i] != '\0')
    {
        if (!((str[i] >= 'A' && str[i] <= 'Z') ||
                    (str[i] >= 'a' && str[i] <= 'z')))
        {
            is_alpha = 0;
        }
        i++;
    }
    return (is_alpha);
}

