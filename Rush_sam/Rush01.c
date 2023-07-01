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

int rush01(int argc, char **argv)
int i = 0;
int j = 0;
char *k = "1234";
char *l = "1324";
char *m = "1423";
char *n = "1342";
char *o = "2";

{
    if (argc != 2)
    {
        putchar('\n');
        return (0);
    }
    while (argv[i] != '\0' && argv[i] <= 9)
    {
        f (argv[i] == '1' && argv[i + 8] == "4")
        {
            *k = 
        }
    }