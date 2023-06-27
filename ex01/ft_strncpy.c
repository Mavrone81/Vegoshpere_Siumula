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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int	i;
    
    i = 0;
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        printf("dest[%d] = %c\n", i, dest[i]);
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        printf("dest[%d] = %c\n", i, dest[i]);
        i++;
    }
    return(dest);
}