#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[i])
		++i;
	if (argc > 0)
	{
		while (--i > 0)
		{
			while (argv[i][j])
				write(1, &argv[i][j++], 1);
			write(1, "\n", 1);
			j = 0;
		}
	}
}
