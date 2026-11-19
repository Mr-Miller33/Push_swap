#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <limits.h>

typedef struct s_node
{
	int value;
	struct s_node *next;
}	t_node;

typedef struct s_stack
{
	t_node *top;
	int size;
	int operations[11];
}	t_stack;

//stack functions
t_stack *create_stack();
t_node	*create_node(int val);
void add_front(t_stack *stack, t_node *new_node);
void add_back(t_stack *stack, t_node *new_node);
void free_stack(t_stack *stack);
void print_stack(t_stack *st);
t_node *stack_last(t_stack *stack);
t_node *bfr_last(t_stack *stack);

//operations
void sa(t_stack *a);
void sb(t_stack *b);
void ss(t_stack *a, t_stack *b);
void pa(t_stack *a, t_stack *b);
void pb(t_stack *a, t_stack *b);
void ra(t_stack *a);
void rb(t_stack *a);
void rr(t_stack *a, t_stack *b);
void rra(t_stack *a);
void rrb(t_stack *b);
void rrr(t_stack *a, t_stack *b);

//parsing
t_stack *parse_to_stack(int argc, char **argv);
int append_number(t_stack *stack, char *arg, int *value);
int parse_integer(char *arg, int *value);
int has_duplicate(t_stack *stack,int value);

//helpers
long long	ft_atoi(const char *nptr);
char	**ft_split(char const *s, char sep);
char	**ft_free(char **p, size_t i);
size_t	ft_count_words(char const *s, char sep);

//disorder
float disorder(t_stack *stack);

//algorithms
void selection_sort(t_stack *stack);


#endif


