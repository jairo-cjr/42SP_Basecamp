char	*ft_strcat(char *dest, char *src)
{
	char	*res;

	res = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (res);
}
