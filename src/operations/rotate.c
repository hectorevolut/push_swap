# include "push_swap.h"

static void rotate(int *arr, int size) {
    int temp;
    int i;
    
    if (!arr || size < 2)
        return;
    temp = arr[0];
    i = 0;
    while (i < size - 1) {
        arr[i] = arr[i + 1];
        i ++;
    }
    arr[size - 1] = temp;
}

void    ra(t_ps *ps) {
    if (!ps || !ps->a || ps->size_a < 2)
        return;
    rotate(ps->a, ps->size_a);
    write (1, "ra\n", 3);
}

void    rb(t_ps *ps) {
    if (!ps || !ps->b || ps->size_b < 2)
        return;
    rotate(ps->b, ps->size_b);
    write (1, "rb\n", 3);
}

void    rr(t_ps *ps) {
    int done;

    done = 0;
    if (!ps)
        return;
    if (ps->a && ps->size_a >= 2) {
        rotate(ps->a, ps->size_a);
        done = 1;
    }
    if (ps->b && ps->size_b >= 2) {
        rotate(ps->b, ps->size_b);
        done = 1;
    }
    if (done)
        write (1, "rr\n", 3);
}