int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power == 0)
		return (1);
	if (power < 0 || nb == 0)
		return (0);
	while (power > 1)
	{
		nb *= i;
		power--;
	}
	return (nb);
}
