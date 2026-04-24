# include "push_swap.c"

void	sa(t_ps *ps)
{
	int	temp;

	if (!ps || !ps->a || ps->size_a < 2)
		return ;
	temp = ps->a[0];
	ps->a[0] = ps->a[1];
	ps->a[1] = temp;
	write(1, "sa\n", 3);
}

