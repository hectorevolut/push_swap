# include "push_swap.h"

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

char	**split_args(int argc, char **argv)
{
	char	**tokens;
	int		i;
	int		j;

	if (argc == 2)
		return (ft_split(argv[1], ' '));
	tokens = malloc(sizeof(char *) * argc);
	if (!tokens)
		return (NULL);
	i = 1;
	j = 0;
	while (i < argc)
	{
		tokens[j] = ft_strdup(argv[i]);
		if (!tokens[j])
		{
			free_tokens(tokens);
			return (NULL);
		}
		i++;
		j++;
	}
	tokens[j] = NULL;
	return (tokens);
}