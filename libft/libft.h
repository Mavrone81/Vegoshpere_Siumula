/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:43:13 by sfu               #+#    #+#             */
/*   Updated: 2023/09/15 01:34:34 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>

size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char* des, const char* sr, size_t size);
void    ft_toupper(char* s);


#endif
