#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <stdarg.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*top;
	int		size;
	int		op_count[12];
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
	MEDIUM,
	COMPLEX
}	t_strategy;

typedef struct s_options
{
	t_strategy	strategy;
	int			bench;
}	t_options;



/* STACK FUNCTIONS */
t_stack	*create_stack();
t_node	*create_node(int val);
void	add_front(t_stack *stack, t_node *new_node);
void	add_back(t_stack *stack, t_node *new_node);
void	free_stack(t_stack *stack);
void	print_stack(t_stack *st);
t_node	*stack_last(t_stack *stack);
t_node	*bfr_last(t_stack *stack);

/* FT_PRINTF FUNCTIONS */
int		ft_print_char(char c);
int		ft_print_hexa(unsigned long hex, char conversion);
int		ft_print_point(void *p);
int		ft_print_sign(void);
int		ft_print_string(char *str);
int		ft_print_digit(int nb);
int		ft_print_float(double nbr, int rep);
int		ft_print_uns_digit(unsigned int nb);
int		ft_printf(const char *format, ...);

/* OPERATIONS */
void	sa(t_stack *a);
void	sb(t_stack *b, t_stack *a);
void	ss(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b, t_stack *a);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b, t_stack *a);
void	rrr(t_stack *a, t_stack *b);
void	rotate_stack(t_stack *stack);
void	swap_stack(t_stack *stack);
void	reverse_rotate_stack(t_stack *stack);


/* PARSING */
t_stack	*parse_to_stack(int argc, char **argv, t_options *options);
int		parse_argument(char *arg, t_stack *stack, int *val);
int		parse_tokens(char *p, t_stack *stack, int *val);
int		append_number(t_stack *stack, char *arg, int *value);
int		parse_integer(char *arg, int *value);
int		has_duplicate(t_stack *stack, int value);
void	select_flags(char **argv, int argc, int *i, t_options *options);

/* HELPERS */
long long	ft_atoi(const char *nptr);
char		**ft_split(char const *s, char sep);
char		**ft_free(char **p, size_t i);
size_t		ft_count_words(char const *s, char sep);
int			ft_strcmp(const char *s1, const char *s2);

/* DISORDER */
float	disorder(t_stack *stack);

/* ALGORITHMS */
int		is_sorted(t_stack *stack);
void	algo_selector(int selection, t_stack *stack);
char	*algo_printer(int selection);
void	selection_sort(t_stack *stack);

/* BENCH */
void	bench_display(t_stack *A, t_options *opt, float init_disorder);


#endif
