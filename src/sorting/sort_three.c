#include "push_swap.h"

void	sort_three(t_ps *ps)
{
	int	a;
	int	b;
	int	c;

	if (!ps || ps->size_a != 3)
		return ;
	a = ps->a[0];
	b = ps->a[1];
	c = ps->a[2];
	if (a < b && b < c)
		return ;
	else if (a > b && b < c && a < c)
		sa(ps);
	else if (a > b && b > c)
	{
		sa(ps);
		rra(ps);
	}
	else if (a > b && b < c && a > c)
		ra(ps);
	else if (a < b && b > c && a < c)
	{
		sa(ps);
		ra(ps);
	}
	else if (a < b && b > c && a > c)
		rra(ps);
}