int	ft_str_is_numeric(char str);
int	ft_str_is_alpha(char str);
int	ft_str_is_whitespace(char str);

int	ft_atoi(char *str)
{
	int	res;
	int	signal;

	res = 0;
	signal = 1;
	while (ft_str_is_whitespace(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signal *= -1;
		str++;
	}
	while (ft_str_is_numeric(*str))
	{
		res = (res * 10) + (*str - '0');
		str++;
	}
	return (res * signal);
}

int	ft_str_is_numeric(char str)
{
	if (str >= '0' && str <= '9')
		return (1);
	return (0);
}

int	ft_str_is_alpha(char str)
{
	if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'))
		return (1);
	return (0);
}

int	ft_str_is_whitespace(char str)
{
	if (str <= 32)
		return (1);
	return (0);
}
