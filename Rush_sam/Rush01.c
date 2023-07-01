/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 18:27:39 by sfu               #+#    #+#             */
/*   Updated: 2023/07/01 18:28:53 by sfu              ###   ########.fr       */
/*                                                                            */
/* *************************************************************************

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}   

// strcmp

int     ft_strcmp(char *s1, char *s2)
{
    int i;
    
    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if ((s1[i] - s2[i]) != 0)
            return (s1[i] - s2[i]);
        i++;
    }
    return (s1[i] - s2[i]);
}

int rush01(argc, **argv)
{
    if (argc != 2)
    {
        ft_putchar('\n');
        return (0);
    }
    if (ft_strcmp(argv[1], "1 2 3 4 5 6 7 8 9") == 0)
    {
        ft_putchar('1');
        ft_putchar('\n');
    }
    else
    {
        ft_putchar('0');
        ft_putchar('\n');
    }
    return (0);
}