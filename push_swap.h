#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

typedef struct s_node
{
	int value;
	struct s_node *next;
}	t_node;

typedef struct s_stack
{
	t_node *top;
	int size;
}	t_stack;

//stack functions
t_stack *create_stack();
t_node	*create_node(int val);
void add_front(t_stack *stack, t_node *new_node);
void add_back(t_stack *stack, t_node *new_node);
void free_stack(t_stack *stack);
void print_stack(t_stack *st);

//operations
void swap(t_stack *a);
void ss(t_stack *a, t_stack *b);
void pa(t_stack *a, t_stack *b);
void pb(t_stack *a, t_stack *b);


#endif


