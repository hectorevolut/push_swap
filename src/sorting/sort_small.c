#include "push_swap.h"

void	sort_small(t_ps *ps)
{
	int	min_index;

	if (!ps || !ps->a || ps->size_a <= 3)
		return ;
	while (ps->size_a > 3)
	{
		min_index = find_min_index(ps);
		while (min_index != 0)
		{
			if (min_index <= ps->size_a / 2)
				ra(ps);
			else
				rra(ps);
			min_index = find_min_index(ps);
		}
		pb(ps);
	}
	sort_three(ps);
	while (ps->size_b > 0)
		pa(ps);
}