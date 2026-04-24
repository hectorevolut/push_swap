# include "push_swap.c"

void swap(int *a, int *b) {
    int temp;

    temp = a;
    a = b;
    b = temp;
}

void sa(t_ps *ps)
{
    int temp;

    if (!ps || !ps->a || ps->size_a < 2)
        return;
    swap(&ps->a[0], &ps->a[1]);
    write(1, "sa\n", 3);
}

void sb(t_ps *ps)
{
    int temp;

    if (!ps || !ps->b || ps->size_b < 2)
        return;
    swap(&ps->b[0], &ps->b[1]);
    write(1, "sb\n", 3);
}

void ss(t_ps *ps) {
    int temp;

    if (!ps)
        return;
    else {
        if (!ps->a || ps->size_a < 2 || !ps->b || ps->size_b < 2)
            return;
        else 
            swap(&ps->a[0], &ps->a[1]);
            swap(&ps->b[0], &ps->b[1]);
    }
    write (1, "ss\n", 3);
}
