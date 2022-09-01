/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:50:21 by avillard          #+#    #+#             */
/*   Updated: 2022/08/15 10:09:55 by avillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_nb(int nb1, int nb2)
{
	char	i[2];
	char	j[2];

	i[1] = '0' + nb1 % 10;
	i[0] = '0' + nb1 / 10;
	j[1] = '0' + nb2 % 10;
	j[0] = '0' + nb2 / 10;
	write(1, &i, 2);
	write(1, " ", 1);
	write(1, &j, 2);
	if (nb1 != 98 || nb2 != 99)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int		nb1;
	int		nb2;

	nb1 = 0;
	while (nb1 <= 98)
	{
		nb2 = nb1 + 1;
		while (nb2 <= 99)
		{
			print_nb(nb1, nb2);
			nb2 ++;
		}
		nb1++;
	}
}
