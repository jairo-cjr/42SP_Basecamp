/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaetano <jcaetano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 15:17:13 by jcaetano          #+#    #+#             */
/*   Updated: 2021/07/23 23:47:08 by jcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int	dupla1;
	int	dupla2;

	dupla1 = 0;
	while (dupla1 <= 98)
	{
		dupla2 = dupla1 + 1;
		while (dupla2 <= 99)
		{
			ft_putchar(48 + (dupla1 / 10));
			ft_putchar(48 + (dupla1 % 10));
			write(1, " ", 1);
			ft_putchar(48 + (dupla2 / 10));
			ft_putchar(48 + (dupla2 % 10));
			if (!(dupla1 == 98 && dupla2 == 99))
				write(1, ", ", 2);
			dupla2++;
		}
		dupla1++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
