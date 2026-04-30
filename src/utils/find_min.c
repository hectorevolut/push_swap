#include "push_swap.h"

int	find_min_index(t_ps *ps)
{
	int	min_index;
	int	i;

	if (!ps || !ps->a || ps->size_a <= 0)
		return (0);
	min_index = 0;
	i = 1;
	while (i < ps->size_a)
	{
		if (ps->a[i] < ps->a[min_index])
			min_index = i;
		i++;
	}
	return (min_index);
}

