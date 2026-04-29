#include "push_swap.h"

static void	dispatch_sort(t_ps *ps)
{
	if (ps->size_a == 2)
		sort_two(ps);
	else if (ps->size_a == 3)
		sort_three(ps);
	else if (ps->size_a <= 5)
		sort_small(ps);
	else
		sort_big(ps);
}

int	main(int argc, char **argv)
{
	t_ps	ps;

	if (argc < 2)
		return (0);
	if (!parse_args(&ps, argc, argv))
		return (print_error(), 1);
	if (is_sorted(&ps))
		return (free_stacks(&ps), 0);
	dispatch_sort(&ps);
	free_stacks(&ps);
	return (0);
}