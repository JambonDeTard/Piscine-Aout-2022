/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 14:18:52 by avillard          #+#    #+#             */
/*   Updated: 2022/08/14 14:35:49 by avillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static int	check_base(char *base)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	if (!base || !base[1])
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (!((base[i] >= '0' && '9' >= base[i]) || (base[i] >= 'a' \
					&& base[i] <= 'z') || (base[i] >= 'A' && 'Z' >= base[i])))
			return (0);
		while (base[z])
			if (base[i] == base[z++])
				return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	size;
	int	n[255];

	i = 0;
	size = 0;
	if (!check_base(base))
		return ;
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar('-');
	}
	while (base[size])
		size++;
	while (nbr)
	{
		n[i] = nbr % size;
		nbr /= size;
		i++;
	}
	while (i > 0)
		ft_putchar(base[n[--i]]);
}
