/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfu <sfu     @student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:19:42 by sfu                #+#    #+#            */
/*   Updated: 2024/01/28 14:19:42 by sfu               ###   ########         */
/*                                                                            */
/* ************************************************************************** */

//Psuedo Code data struct for t_stacks
// declar link list, one for stack A and b
//initialise LL to NULL, prevent undefinded parameters
// Edge cases identification
	// Arg count >=2
	// second input to be !empty [NULL]
	// if input is str, split to indicate substrings
//start stack A by appending each input number as a node to the stack
	//Error handling integer overflow, dup, and syntax, "-" '+'
	//if errors found, free and return (error)
	// check if input is long
	// if str convert to long
	// start node to stack a
//check if a is sorted,
	// if not, sort
	//if sort swap
	//check for last 3 numbers
	//if last 3 implenmeht last_sort
	//if not run Algo
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stbool.h>
#include <limits.h>
#include "../libft/inc/libft.h"
#include "../libft/inc/ft_printf.h"

typedef struct  s_stack_node{
    int					num;
    char				index;
    int					cost;
	bool				above_m;
	bool				lowest_c;
    struct s_stack_node	*target
	struct s_stack_node	*prev;
    struct s_node		*next;
} t_stack_node;

//statics

static int	count_words(char*s, char c);
static char	*get_next_word(char *s, char c);
static void	push(t_stack_node **dst, t_stack_node **src);
static void	rotate(t_stacknode **stack);
static void	swap(t_stack_node **head);

// Commands
void	pa(t_stack_node **a, t_stack_node **b, bool print);
void 	pb(t_stack_node **b, t_stack_node **a, bool print);
void	ra(t_stack_node **a, bool print);
void	rb(t_stack_node **b, bool print);
void	rr(t_stack_node **b, bool print);
void	sa(t_stack_node **a, bool print);
void	sb(t_stack_node **b, bool print);
void	ss(t_stack_node **a, t_stack **b, bool print);
void	last_three(t_stack_node **a);

// Swap Utils
int				stack_len(t_stack_node *stack);
t_stack_node	*find_last(t_stack_node *stack);
t_stack_node	*find_max(t_stack_node *stack);

// error
int		syntax_err (char *str_w);
int		dup_err(t_stack_node *a, int n);
void	free_stack(t_stack_node **stack);
void	free_err(t_stack_node **a);

// stacks
static long 	ft_atol(const char *s);
static void 	append_node(t_stack_node ** stack, int n);
void			init_stack_a(t_stack_node **a, char **argv);
t_stack_node	*retrive_cheapest(t_stack_node *stack);
void	ready_push(ft_stack_node **stack, t_stack_node *top_node, char s_name);
