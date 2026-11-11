#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"


t_stack *create_stack()
{
	t_stack *stack;

	stack =(t_stack *)malloc(sizeof(t_stack));
	if (!stack)
	{
		return NULL;
	}
	stack->top = NULL;
	stack->size = 0;
	return stack;
}
t_node	*create_node(int val)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->value = val;
	node->next = NULL;
	return (node);
}
void add_front(t_stack *stack, t_node *new_node)
{

	if (!stack || !new_node)
	{
		return ;
	}
	new_node->next = stack->top;
	stack->top = new_node;
	stack->size++;
}
void add_back(t_stack *stack, t_node *new_node)
{
	t_node *tmp;

	if (!stack || !new_node)
	{
		return ;
	}
	if (stack->size == 0)
	{
		stack->top = new_node;
	}
	else
	{
		tmp = stack->top;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;
	}
	new_node->next = NULL;
	stack->size++;
}
void	free_stack(t_stack *stack)
{
	t_node	*tmp;
	t_stack *init_stack;

	init_stack = stack;
	if (!stack)
		return ;
	while (stack->top)
	{
		tmp = (stack->top)->next;
		free(stack->top);
		stack->top = tmp;
	}
	free(init_stack);
}
void print_stack(t_stack *st)
{
	t_node *tmp;

	if (st->size == 0)
	{
		printf("empty stack !");
		return ;
	}
	
	tmp = st->top;
	while (tmp)
	{
		printf("%d\n",tmp->value);
		tmp = tmp->next;
	}
	printf("NULL");
	
}

int main()
{
	t_stack *a;
	t_stack *b;

	a = create_stack();
	b = create_stack();
	add_back(a, create_node(1));
	add_back(a, create_node(2));
	add_back(a, create_node(3));
	
	add_back(b, create_node(5));
	add_back(b, create_node(6));
	add_back(b, create_node(7));
	
	ss(a,b);
	pb(a,b);
	pb(a,b);
	pb(a,b);

	print_stack(a);
	printf("\n");
	print_stack(b);
}

