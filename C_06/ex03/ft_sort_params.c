#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);
int		ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	char	aux[100];

	i = 0;
	j = 0;
	if (argc > 0)
	{
		while (argv[++i])
		{
			if (ft_strcmp(argv[i-1], argv[i]) > 0)
			{
				ft_strcpy(aux, argv[i - 1]);
				ft_strcpy(argv[i - 1], argv[i]);
				ft_strcpy(argv[i], aux);
				i = 0;
			}
		}
		i = 0;
		while (argv[++i])
		{
			while (argv[i][j])
				write (1, &argv[i][j++], 1);
			write(1, "\n", 1);
			j = 0;
		}
	}
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*res;

	res = dest;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (res);
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}