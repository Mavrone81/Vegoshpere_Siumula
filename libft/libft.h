/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:43:13 by sfu               #+#    #+#             */
/*   Updated: 2023/09/23 20:56:31 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>

int	ft_isalpha(char x);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
void*	ft_memset(void* a, int c, size_t n);
void	ft_bzero(void* s, size_t len);
void*	ft_memcpy(void* des, void* src, size_t n);
void*	ft_memmove(void* de, const void* sr, size_t n);
size_t	ft_strlcpy(char* des, const char *sr, size_t n);
size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char* des, const char* sr, size_t size);
void    ft_toupper(char* s);
void    ft_tolower(char* s);
char*   strchr(const char *s, int c);
char*   strrchr(const char *s, int c);
int     ft_atoi(const char *str);
int     ft_memcmp(const char *s1, const char *s2, size_t n);
void    *ft_calloc(size_t num_elements, size_t element_size);
int     ft_memcmp(const char *s1, const char *s2, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
char    *ft_strnstr(const char *heystack, const char *needle, size_t n);
int	ft_strncmp(const char* str1, const char* str2, size_t n);

#endif
