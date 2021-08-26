char	*ft_strcpy(char *dest, char *src)
{
	char	*res;

	res = dest;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (res);
}
