int	ft_str_is_numeric(char str)
{
	if (str >= '0' && str <= '9')
		return (0);
	return (1);
}

int	ft_str_is_lowercase(char str)
{
	if (str >= 'a' && str <= 'z')
		return (0);
	return (1);
}

int	ft_str_is_upercase(char str)
{
	if (str >= 'A' && str <= 'Z')
		return (0);
	return (1);
}

int	ft_str_is_alphanumeric(char str)
{
	if (ft_str_is_numeric(str) == 0
		|| ft_str_is_upercase(str) == 0
		|| ft_str_is_lowercase(str) == 0)
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (ft_str_is_lowercase(str[i]) == 0)
				str[i] = str[i] - 32;
		}
		else
		{
			if (ft_str_is_upercase(str[i]) == 0)
				str[i] = str[i] + 32;
		}
		if (ft_str_is_alphanumeric(str[i - 1]) == 1)
		{
			if (ft_str_is_lowercase(str[i]) == 0)
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
