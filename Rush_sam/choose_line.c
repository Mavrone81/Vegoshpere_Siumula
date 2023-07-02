# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
/*   choose_line.c                                      :+:      :+:    :+:   */
#                                                     +:+ +:+         +:+      #
#    By: klinn <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/02 01:39:27 by klinn             #+#    #+#              #
/*   Updated: 2023/07/02 05:14:00 by klinn            ###   ########.fr       */
#                                                                              #
# **************************************************************************** #

void	choose_line1_2(char str)
{
	if (str == '')
		draw_line1_2();
	else if (str == '')
		draw_line1_2();
	else
		return (0);
}

void	choose_line2_1(char str)
{
	if (str == '')
		draw_line2_1();
	else if (str == '')
		draw_line2_1();
	else
		return (0);
}

void    choose_line3_1(char str)
{
    if (str == '1')
        draw_line3_1 ('1', '3');
    else if (str == '3')
        draw_line3_1 ('3', '1');
    else
        return (0);
}

void	choose_line1_3(char str)
{
	if (str == '1')
		draw_line1_3();
	else if (str == '')
		draw_line1_3();
	else
		return (0);
}


void    choose_line3_2(char str1, char str2)
{
    if (str1 == '1' && str2 == '2')
        draw_line3_2 ('1', '2', '3');
    else if (str1 == '1' && str2 == '3')
        draw_line3_2 ('1', '3', '2');
    else if (str1 == '2' && str2 == '3')
        draw_line3_2 ('2', '3', '1');
    else
        return (0);
}

void    choose_line2_3(char str1, char str2)
{
    if (str1 == '1' && str2 == '2')
        draw_line2_3 ('1', '2', '3');
    else if (str1 == '1' && str2 == '3')
        draw_line2_3 ('1', '3', '2');
    else if (str1 == '2' && str2 == '3')
        draw_line2_3 ('2', '3', '1');
    else
        return (0);
}
