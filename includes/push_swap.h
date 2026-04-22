#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_ps
{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b;
	int	capacity;
}	t_ps;

/* parsing */
char	**split_args(int argc, char **argv);
int		parse_args(t_ps *ps, int argc, char **argv);
int		is_valid_number(char *str);
int		has_duplicates(int *arr, int size);
int		safe_atoi(const char *str, int *out);

/* init */
int		init_stacks(t_ps *ps, int capacity);
void	free_stacks(t_ps *ps);

/* operations */
void	sa(t_ps *ps);
void	sb(t_ps *ps);
void	ss(t_ps *ps);
void	pa(t_ps *ps);
void	pb(t_ps *ps);
void	ra(t_ps *ps);
void	rb(t_ps *ps);
void	rr(t_ps *ps);
void	rra(t_ps *ps);
void	rrb(t_ps *ps);
void	rrr(t_ps *ps);

/* sorting */
void	sort_two(t_ps *ps);
void	sort_three(t_ps *ps);
void	sort_small(t_ps *ps);
void	sort_big(t_ps *ps);

/* utils */
int		is_sorted(t_ps *ps);
int		find_min_index(t_ps *ps);
int		find_max_index_b(t_ps *ps);
void	print_error(void);

#endif