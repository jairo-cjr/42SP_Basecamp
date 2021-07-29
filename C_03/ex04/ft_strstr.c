char	*ft_strstr(char *str, char *to_find)
{
	char	*haystack;
	char	*needle;

	needle = to_find;
	if (!*needle)
		return (str);
	while (*str != 0)
	{
		if (*str == *needle)
		{
			haystack = str;
			while (1)
			{
				if (*needle == 0)
					return (str);
				if (*haystack++ != *needle++)
					break ;
			}
		}
		needle = to_find;
		str++;
	}
	return (0);
}
