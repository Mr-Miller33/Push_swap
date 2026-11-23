#include "push_swap.h"

#define SEL_WINDOW 24

/* Return the position of the largest element of B. */
static int	sel_max_pos(t_stack *b)
{
	t_node	*p;
	int		pos;
	int		best;
	int		largest;

	p = b->top;
	largest = p->value;
	best = 0;
	pos = 0;
	while (p)
	{
		if (p->value > largest)
		{
			largest = p->value;
			best = pos;
		}
		p = p->next;
		pos++;
	}
	return (best);
}

/* B stays circularly sorted in descending order. */
static int	sel_target_pos(t_stack *b, int value)
{
	t_node	*p;
	int		pos;
	int		best_pos;
	int		best_value;

	p = b->top;
	pos = 0;
	best_pos = -1;
	best_value = INT_MIN;
	while (p)
	{
		if (p->value < value && (best_pos < 0 || p->value > best_value))
		{
			best_value = p->value;
			best_pos = pos;
		}
		pos++;
		p = p->next;
	}
	if (best_pos >= 0)
		return (best_pos);
	return (sel_max_pos(b));
}

/* Same-direction rotations can be merged into rr or rrr. */
static int	sel_cost(int a, int b)
{
	int	x;
	int	y;

	x = a;
	y = b;
	if (x < 0)
		x = -x;
	if (y < 0)
		y = -y;
	if ((a >= 0 && b >= 0) || (a <= 0 && b <= 0))
	{
		if (x > y)
			return (x);
		return (y);
	}
	return (x + y);
}

/* best[0] = rotations of A, best[1] = rotations of B,
   best[2] = estimated cost. Negative means reverse rotation. */
static void	sel_score(t_stack *a, t_stack *b, int pos_a, int pos_b,
		int best[3])
{
	int	ar[2];
	int	br[2];
	int	i;
	int	j;
	int	cost;

	ar[0] = pos_a;
	ar[1] = (pos_a == 0) ? 0 : pos_a - a->size;
	br[0] = pos_b;
	br[1] = (pos_b == 0) ? 0 : pos_b - b->size;
	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 2)
		{
			cost = sel_cost(ar[i], br[j]);
			if (cost < best[2])
			{
				best[0] = ar[i];
				best[1] = br[j];
				best[2] = cost;
			}
			j++;
		}
		i++;
	}
}

/* Inspect candidates near both ends of A. */
static void	sel_best_move(t_stack *a, t_stack *b, int best[3])
{
	t_node	*p;
	int		pos;
	int		target;

	best[2] = INT_MAX;
	best[0] = 0;
	best[1] = 0;
	p = a->top;
	pos = 0;
	while (p)
	{
		if (pos < SEL_WINDOW || pos >= a->size - SEL_WINDOW)
		{
			target = sel_target_pos(b, p->value);
			sel_score(a, b, pos, target, best);
		}
		pos++;
		p = p->next;
	}
}

static void	sel_single_rotations(t_stack *a, t_stack *b, int best[3])
{
	while (best[0] > 0)
	{
		ra(a);
		best[0]--;
	}
	while (best[0] < 0)
	{
		rra(a);
		best[0]++;
	}
	while (best[1] > 0)
	{
		rb(b, a);
		best[1]--;
	}
	while (best[1] < 0)
	{
		rrb(b, a);
		best[1]++;
	}
}

static void	sel_execute(t_stack *a, t_stack *b, int best[3])
{
	while (best[0] > 0 && best[1] > 0)
	{
		rr(a, b);
		best[0]--;
		best[1]--;
	}
	while (best[0] < 0 && best[1] < 0)
	{
		rrr(a, b);
		best[0]++;
		best[1]++;
	}
	sel_single_rotations(a, b, best);
	pb(a, b);
}

static void	sel_align_max(t_stack *a, t_stack *b)
{
	int	steps;

	steps = sel_max_pos(b);
	if (steps <= b->size / 2)
	{
		while (steps-- > 0)
			rb(b, a);
	}
	else
	{
		steps = b->size - steps;
		while (steps-- > 0)
			rrb(b, a);
	}
}

static void	sel_sort_three(t_stack *a)
{
	int	first;
	int	second;
	int	third;

	first = a->top->value;
	second = a->top->next->value;
	third = a->top->next->next->value;
	if (first > second && first > third)
		ra(a);
	else if (second > first && second > third)
		rra(a);
	if (a->top->value > a->top->next->value)
		sa(a);
}

void	test_sort(t_stack *a)
{
	t_stack	*b;
	int		best[3];

	if (!a || is_sorted(a))
		return ;
	if (a->size == 2)
	{
		sa(a);
		return ;
	}
	if (a->size == 3)
	{
		sel_sort_three(a);
		return ;
	}
	b = create_stack();
	if (!b)
		return ;
	pb(a, b);
	while (a->size > 0)
	{
		sel_best_move(a, b, best);
		sel_execute(a, b, best);
	}
	sel_align_max(a, b);
	while (b->size > 0)
		pa(a, b);
	free_stack(b);
}
