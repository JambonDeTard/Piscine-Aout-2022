/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 09:19:32 by avillard          #+#    #+#             */
/*   Updated: 2022/08/11 17:54:50 by avillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	checkn(int nb)
{
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	return (nb);
}

void	print(int nb)
{
	char	a;

	a = '0' + nb;
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	nb = checkn(nb);
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		print(nb % 10);
	}
	else
	{
		print(nb);
	}
}
