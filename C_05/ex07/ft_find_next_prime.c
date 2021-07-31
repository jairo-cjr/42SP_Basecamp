int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
	{
		if ((nb % 2 == 1) && nb > 2)
			nb += 2;
		else
			nb++;
	}
	return (nb);
}

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i * i <= nb && i <= 46341)
	{
		if (nb % i == 0)
			return (0);
		if (i == 2)
			++i;
		else
			i += 2;
	}
	if (nb > 1)
		return (1);
	return (0);
}
