# include "push_swap.h"

int is_valid_number(char *str) {
    if (!str || *str == '\0')
        return (0);
    if (*str == '+' || *str == '-') {
        str ++;
        if (!ft_isdigit(*str))
            return (0);
    }
    while (*str) {
        if (!ft_isdigit(*str))
            return (0);
        str ++;
    }
    return (1);
}

int	safe_atoi(const char *str, int *out)
{
	int		sign;
	long	result;

	if (!str || !out)
		return (0);
	sign = 1;
	result = 0;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		if (sign == 1 && result > INT_MAX)
			return (0);
		if (sign == -1 && result > (long)INT_MAX + 1)
			return (0);
		str++;
	}
	*out = (int)(result * sign);
	return (1);
}

int has_duplicates(int *arr, int size) {
    int i;
    int j;

    i = 0;
    while (i < size) {
        j = i + 1;
        while (j < size) {
            if (arr[i] == arr[j])
            return (1);
            j ++;
        }
        i ++;
    }
    return (0);
}
