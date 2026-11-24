/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:31:23 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/24 18:02:38 by moslaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdbool.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct s_node
{
    int				content;
	int				index;
    struct s_node	*next;
}   t_node;

typedef struct s_stack
{
	t_node	*top;
	size_t		op_count[12];
	size_t		size;
}	t_stack;

typedef enum operations
{
	OP_ERROR = -1,
	P_A,
	P_B,
	S_A,
	S_B,
	S_S,
	R_A,
	R_B,
	R_R,
	RR_A,
	RR_B,
	RR_R,
	TOTAL_OP
}	t_operations;

typedef enum e_strategy
{
	ADAPTIVE,
	SIMPLE,
	MIDIUM,
	COMPLEX
}	t_strategy;

typedef struct s_options
{
	int	bench;
	t_strategy	strategy;
}	t_options;

//algotithm and sorting functions
void	chunk_sort(t_stack *A, t_stack *B, size_t digit_nb);

//error handling functing
int	ft_atoi(const char *nptr);
int	ft_isalpha(int c);
char	**ft_split(char const *s, char c);
int ft_sqrt(int n);

//benchmark
void	bench_display(t_stack *A, t_strategy *selection);

//ft_printf functions
int	ft_print_char(char c);
int	ft_print_hexa(unsigned long hex, char conversion);
int	ft_print_point(void *p);
int	ft_print_sign(void);
int	ft_print_string(char *str);
int	ft_print_digit(int nb);
int	ft_print_float(double nbr, int rep);
int	ft_print_uns_digit(unsigned int nb);
int	ft_printf(const char *format, ...);

//operations functions
void	reverse_rotate_stack(t_stack *stack);
void	rotate_stack(t_stack *stack);
void	swap_stack(t_stack *stack);
int	pa(t_stack *A, t_stack *B);
int	pb(t_stack *B, t_stack *A);
int	sa(t_stack *A);
int	sb(t_stack *B, t_stack *A);
int	ss(t_stack *A, t_stack *B);
int	ra(t_stack *A);
int	rb(t_stack *B, t_stack *A);
int	rr(t_stack *A, t_stack *B);
int	rra(t_stack *A);
int	rrb(t_stack *B, t_stack *A);
int	rrr(t_stack *A, t_stack *B);

//stack & nodes functions
t_stack	*new_stack(void);
t_node	*new_node(int content);
t_node	*last_node(t_stack *stack);
size_t	size_of_stack(t_stack *stack);
void	del_node(t_stack *stack);
void	add_node_front(t_stack *stack, t_node *new);
void	add_node_back(t_stack *stack, t_node *new);

#endif