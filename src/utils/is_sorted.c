#include "push_swap.h"

int	is_sorted(t_ps *ps)
{
    int i;

    if (!ps || !ps->a)
        return (0);
    if (ps->size_a <= 1)
        return (1);
    i = 0;
    while (i < ps->size_a - 1)
    {
        if (ps->a[i] > ps->a[i + 1])
            return (0);
        i++;
    }
    return (1);
}