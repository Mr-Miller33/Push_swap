#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	int *arr;
	int capacity;
	int top;
}	stack;

stack *create_stack(int capacity)
{
	stack *s = (stack *)malloc(sizeof(stack));
	s->capacity = capacity;
	s->arr = (int *)malloc(capacity * sizeof(int));
	s->top = -1;

	return s;
}

void freeStack(stack *s)
{
	free(s->arr);
	free(s);
}
void push(stack *s, int val)
{
	if (s->top == (s->capacity - 1))
	{
		printf("stak overflow !!!");
		return ;
	}
	s->top++;
	(s->arr)[s->top] = val;
	
}

int pop(stack *s)
{
	if (s->top == -1)
	{
		printf("stack undeflow");
		return -1;
	}
	return s->arr[s->top];
	
}
int peek(stack *s)
{
	if (s->top == -1)
	{
		return -1;
	}
	return s->arr[s->top];
	
}
int isEmpty(stack *s)
{
	return (s->top == -1);	
}
int isFull(stack *s)
{
	return (s->top == s->capacity - 1);
}

int main()
{
	stack *s = create_stack(5);
	push(s,14);
	push(s,2);
	push(s,3);
	push(s,4);
	push(s,5);

	int i = 0;
	while (i < (s->top + 1))
	{
		printf("%d->",s->arr[i]);
		i++;
	}
	printf("\n pop : %d\n",pop(s));
	i = 0;
	while (i < (s->top + 1))
	{
		printf("%d->",s->arr[i]);
		i++;
	}
}