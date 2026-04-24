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

int init_stacks(t_ps *ps, int capacity)
{
    if (!ps)
        return (0);
    if (capacity <= 0)
        return (0);
    ps->capacity = capacity;
    ps->a = malloc(capacity * sizeof(int));
    if (!ps->a)
    {
        return (0);
    }
    ps->b = malloc(capacity * sizeof(int));
    if (!ps->b)
    {
        free(ps->a);
        ps->a = NULL;
        return (0);
    }
    ps->size_a = 0;
    ps->size_b = 0;
    return (1);
}
