int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power == 0)
		return (1);
	if (power < 0 || nb == 0)
		return (0);
	else
		result = (nb * ft_recursive_power(nb, power - 1));
	return (result);
}
