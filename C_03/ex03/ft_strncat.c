char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*res;
	unsigned int	i;

	i = 0;
	res = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0' && i < nb)
	{
		*dest++ = *src++;
		i++;
	}
	*dest = '\0';
	return (res);
}
