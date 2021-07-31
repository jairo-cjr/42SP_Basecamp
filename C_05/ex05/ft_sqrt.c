int	ft_sqrt(int nb)
{
	int	power;

	power = 1;
	while (power * power < nb && power < 46341)
		power++;
	if (power * power == nb)
		return (power);
	return (0);
}
