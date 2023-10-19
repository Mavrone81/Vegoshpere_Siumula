/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:43:13 by sfu               #+#    #+#             */
/*   Updated: 2023/10/20 01:12:09 by sfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>

//part I
int		ft_isalpha(char x);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *str);
void*	ft_memset(void* a, int c, size_t n);
void	ft_bzero(void* s, size_t len);
void*	ft_memcpy(void* des, void* src, size_t n);
void*	ft_memmove(void* de, const void* sr, size_t n);
size_t	ft_strlcpy(char* des, const char *sr, size_t n);
size_t	ft_strlcat(char* des, const char* sr, size_t size);

void	ft_toupper(char* s);
void	ft_tolower(char* s);
char*	ft_strchr(const char *s, int c);
char*	ft_strrchr(const char *s, int c);
int		ft_strncmp(const char* str1, const char* str2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *heystack, const char *needle, size_t n);
int		ft_atoi(const char *str);
//additional
void	*ft_calloc(size_t num_elements, size_t element_size);
char	*ft_strdup(const char *s);

//part II
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(const char *s1, const char *set);
char	*ft_strtrim(const char *s1, const char *set);
char    **ft_split(const char *s, char c);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);

//bonus

typedef	struct	s_list
{
	void			*content;
	struct	s_list	*next;
}					t_list;

typedef	struct	s_node
{
	t_list	*head;
	t_list	*current;
}

int		ft_lstsize(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, voi (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *));
t_list	*ft_lstnew(void *content);

// OThers
//int	ft_check_special(unsigned int ch);

#endif
