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
int i = 0;
int j = 0;
char *k = "1234";
char *l = "1324";
char *m = "1423";
char *n = "1242";
char *o = "1342";
char *p = "1432";
char *q = "2134";
char *r = "2143";
char *s = "2314";
char *t = "2341";
char *u = "2413";
char *v = "2431";
char *w = "3124";
char *x = "3142";
char *y = "3214";
char *z = "3241";
char *a = "3412";
char *b = "3421";
char *c = "4123";
char *d = "4132";
char *e = "4213";
char *f = "4231";
char *g = "4312";
char *h = "4321";

    if (argc != 2)
    {
        putchar('\n');
        return (0);
    }
    while (argv[i] != '\0' && argv[i] <= 9)
    {
        if (argv[i + 12] == '4' && argv[i + 4] == '1')
        {
            draw_line4;
        }
        else if (argv[i + 12] == '3' && argv[i + 4] == '1')
        {
            if (argv[i] == '3' and argv[i + 8] == '1')
            {
                choose_line3_1;
            }
            else
            {
                return (0);
            }
        else if (argv[i + 12] == '3' && argv[i + 4] == '1')
        {
            if (argv[i] == '3' && argv[i + 8] == '2')
            {
                choose_line3_2;
            }
            else
            {
                return (0);
            }
        else if (argv[i + 12] == '2' && argv[i + 8] == '3)
        {
            choose_line2_3;
        }
        else if (argv[i + 12] == '1' && argv[i + 8] == '2')
        {
            choose_line1_2;
        }
        else if (argv[i + 12] == '1' && argv[i + 8] == '3')
        {
            choose_line1_3;
        }
        else if (argv[i + 12] == '1' && argv[i + 8] == '4')
        {
            draw_line1_4;
        }
        else
        {
            draw_error;
        }
    }
