static void	swap_values(int *x, int *y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

void	sa(t_ps *ps)
{
	if (!ps || !ps->a || ps->size_a < 2)
		return ;
	swap_values(&ps->a[0], &ps->a[1]);
	write(1, "sa\n", 3);
}

void	sb(t_ps *ps)
{
	if (!ps || !ps->b || ps->size_b < 2)
		return ;
	swap_values(&ps->b[0], &ps->b[1]);
	write(1, "sb\n", 3);
}

void	ss(t_ps *ps)
{
	int	done;

	if (!ps)
		return ;
	done = 0;
	if (ps->a && ps->size_a >= 2)
	{
		swap_values(&ps->a[0], &ps->a[1]);
		done = 1;
	}
	if (ps->b && ps->size_b >= 2)
	{
		swap_values(&ps->b[0], &ps->b[1]);
		done = 1;
	}
	if (done)
		write(1, "ss\n", 3);
}
