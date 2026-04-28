#include "push_swap.h"

static int count_tokens(char **tokens) {
	int count;

	if (!tokens)
		return (0);
	count = 0;
	while (*tokens) {
		tokens ++;
		count ++;
	}
	return (count);
}

static void	free_tokens(char **tokens)
{
	int	i;

	if (!tokens)
		return ;
	i = 0;
	while (tokens[i])
	{
		free(tokens[i]);
		i++;
	}
	free(tokens);
}

int	parse_args(t_ps *ps, int argc, char **argv)
{
	char	**tokens;
	int		count;
	int		i;
	int		value;

	if (!ps)
		return (0);
	tokens = split_args(argc, argv);
	if (!tokens)
		return (0);
	count = count_tokens(tokens);
	if (count == 0)
		return (free_tokens(tokens), 0);
	if (!init_stacks(ps, count))
		return (free_tokens(tokens), 0);
	i = 0;
	while (tokens[i])
	{
		if (!is_valid_number(tokens[i]))
			return (free_tokens(tokens), free_stacks(ps), 0);
		if (!safe_atoi(tokens[i], &value))
			return (free_tokens(tokens), free_stacks(ps), 0);
		ps->a[i] = value;
		ps->size_a++;
		i++;
	}
	if (has_duplicates(ps->a, ps->size_a))
		return (free_tokens(tokens), free_stacks(ps), 0);
	free_tokens(tokens);
	return (1);
}