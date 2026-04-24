# include "push_swap.h"

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

void	pb(t_ps *ps)
{
	int	temp;
	int	i;

	if (!ps || !ps->a || !ps->b || ps->size_a <= 0)
		return ;
	temp = ps->a[0];
	i = ps->size_b;
	while (i > 0)
	{
		ps->b[i] = ps->b[i - 1];
		i--;
	}
	ps->b[0] = temp;
	ps->size_b++;
	i = 0;
	while (i < ps->size_a - 1)
	{
		ps->a[i] = ps->a[i + 1];
		i++;
	}
	ps->size_a--;
	write(1, "pb\n", 3);
}

void	pa(t_ps *ps)
{
	int	temp;
	int	i;

	if (!ps || !ps->a || !ps->b || ps->size_b <= 0)
		return ;
	temp = ps->b[0];
	i = ps->size_a;
	while (i > 0)
	{
		ps->a[i] = ps->a[i - 1];
		i--;
	}
	ps->a[0] = temp;
	ps->size_a++;
	i = 0;
	while (i < ps->size_b - 1)
	{
		ps->b[i] = ps->b[i + 1];
		i++;
	}
	ps->size_b--;
	write(1, "pa\n", 3);
}