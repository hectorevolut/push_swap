# include "push_swap.h"

static void reverse_rotate(int *arr, int size) {
    int temp;
    int i;
    
    if (!arr || size < 2)
        return;
    temp = arr[size - 1];
    i = size - 1;
    while (i > 0) {
        arr[i] = arr[i - 1];
        i --;
    }
    arr[0] = temp;
}

void    rra(t_ps *ps) {
    if (!ps || !ps->a || ps->size_a < 2)
        return;
    reverse_rotate(ps->a, ps->size_a);
    write (1, "rra\n", 4);
}

void    rrb(t_ps *ps) {
    if (!ps || !ps->b || ps->size_b < 2)
        return;
    reverse_rotate(ps->b, ps->size_b);
    write (1, "rrb\n", 4);
}

void    rrr(t_ps *ps) {
    int done;

    done = 0;
    if (!ps)
        return;
    if (ps->a && ps->size_a >= 2) {
        reverse_rotate(ps->a, ps->size_a);
        done = 1;
    }
    if (ps->b && ps->size_b >= 2) {
        reverse_rotate(ps->b, ps->size_b);
        done = 1;
    }
    if (done)
        write (1, "rrr\n", 4);
}