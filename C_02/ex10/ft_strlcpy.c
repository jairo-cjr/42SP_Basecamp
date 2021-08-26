unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	if (!*src)
		return (*dest);
	i = 0;
	while (src[i] != '\0' && i <= size)
	{
		dest[i] = src[i];
		if (i == size)
			dest[i] = '\0';
		i++;
	}
	while (src[i] != '\0')
		i++;
	return (i);
}
