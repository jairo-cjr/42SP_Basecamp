#include <unistd.h>

void	ft_swap(int *a, int *b);

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	end;

	end = size - 1;
	count = 0;
	while (count < (size / 2))
	{
		ft_swap((tab + count), (tab + end));
		count++;
		end--;
	}
}

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
