#include "push_swap.h"

int	init_stacks(t_ps *ps, int capacity)
{
	(void)ps;
	(void)capacity;
	return (1);
}

void free_stacks(t_ps *ps)
{
    if (!ps)
        return;
    if (ps->a)
        free(ps->a);
    if (ps->b)
        free(ps->b);
    ps->a = NULL;
    ps->b = NULL;
    ps->size_a = 0;
    ps->size_b = 0;
    ps->capacity = 0;
}