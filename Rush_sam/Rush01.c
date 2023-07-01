/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 22:47:24 by sfu               #+#    #+#             */
/*   Updated: 2023/07/01 22:47:34 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int rush01(int argc, char **argv)
{
int i = 0;
int j = 0;

    if (argc != 2)
    {
        putchar('\n');
        return (0);
    }
    while(argv[i + 12] != '\0' && argv[i + 12] <= 9)
    {
        if(argv[i + 12] == '4' && argv[i + 4] == '1')
        {
            draw_line4();
        }
        else if(argv[i + 12] == '3' && argv[i + 4] == '1')
        {
            if(argv[i] == '3' && argv[i + 8] == '1')
            {
                choose_line3_1(argv[i + 1]);
            }
            else
            {
                return (0);
            }
        }
        else if (argv[i + 12] == '3' && argv[i + 4] == '1')
        {
            if (argv[i] == '3' && argv[i + 8] == '2')
            {
                choose_line3_2(argv[i]);
            }
            else
            {
                return (0);
            }
        }
        else if (argv[i + 12] == '2' && argv[i + 8] == '3')
        {
            choose_line2_3(argv[i]);
        }
        else if (argv[i + 12] == '1' && argv[i + 8] == '2')
        {
            choose_line1_2(argv[i + 1]);
        }
        else if (argv[i + 12] == '1' && argv[i + 8] == '3')
        {
            choose_line1_3(argv[i + 1]);
        }
        else if (argv[i + 12] == '1' && argv[i + 8] == '4')
        {
            draw_line1_4();
        }
        else
        {
            draw_error();
        }
        i++;
    }