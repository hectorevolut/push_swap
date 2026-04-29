#include "push_swap.h"

void	sort_two(t_ps *ps)
{
	if (!ps || ps->size_a != 2)
		return;
	if (ps->a[0] > ps->a[1])
		sa(ps);
}