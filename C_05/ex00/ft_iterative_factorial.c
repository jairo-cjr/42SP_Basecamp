int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = nb;
	nb = 1;
	while (i > 0)
		nb *= i--;
	return (nb);
}
