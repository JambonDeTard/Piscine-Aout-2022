/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:32:25 by avillard          #+#    #+#             */
/*   Updated: 2022/08/15 10:08:33 by avillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	nbr1;
	char	nbr2;
	char	nbr3;

	nbr1 = '0' - 1;
	while (++nbr1 <= '7')
	{
		nbr2 = nbr1;
		while (++nbr2 <= '8')
		{
			nbr3 = nbr2;
			while (++nbr3 <= '9')
			{
				ft_putchar(nbr1);
				ft_putchar(nbr2);
				ft_putchar(nbr3);
				if (nbr1 != '7' && nbr2 != '8' && nbr3 != '9')
					ft_putchar(',');
				if (nbr1 != '7' && nbr2 != '8' && nbr3 != '9')
					ft_putchar(' ');
			}
		}
	}
}
