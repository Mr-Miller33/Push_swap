/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moslaoui <moslaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:31:23 by moslaoui          #+#    #+#             */
/*   Updated: 2026/11/14 17:23:04 by moslaoui         ###   ########.fr       */
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
	size_t				index;
    struct s_node	*next;
}   t_node;

typedef struct s_stack
{
	t_node	*top;
	size_t		size;
}	t_stack;

typedef enum operations
{
	P_A = 1
	P_B
	S_A
	S_B
	S_S
	R_A
	R_B
	R_R
	RR_A
	RR_B
	RR_R
}	def_stack;

//error handling functing
int	ft_atoi(const char *nptr);
int	ft_isalpha(int c);
char	**ft_split(char const *s, char c);


//ft_printf functions
int	ft_print_char(char c);
int	ft_print_hexa(unsigned long hex, char conversion);
int	ft_print_point(void *p);
int	ft_print_sign(void);
int	ft_print_string(char *str);
int	ft_print_digit(int nb);
int	ft_print_uns_digit(unsigned int nb);
int	ft_printf(const char *format, ...);

//operations functions
void    push(t_stack *dst, t_stack *src);
void	swap(t_stack *stack);
void	rotation(t_stack *stack);
void	rev_rotation(t_stack *stack);
char	*op_selector(int select);

//stack & nodes functions
t_stack	*new_stack(void);
t_node	*new_node(int content);
t_node	*last_node(t_stack *stack);
size_t	size_of_stack(t_stack *stack);
void	del_node(t_stack *stack);
void	add_node_front(t_stack *stack, t_node *new);

#endif