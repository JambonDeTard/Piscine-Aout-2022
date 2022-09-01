/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 09:53:44 by avillard          #+#    #+#             */
/*   Updated: 2022/08/22 16:31:38 by avillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (nb > 0)
	{
		nb = nb - (2 * i + 1);
		i++;
	}
	return (i);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	sqrt;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	sqrt = ft_sqrt(nb);
	i = 1;
	while ((2 * i) < sqrt)
	{
		if (nb % (2 * i + 1) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	if (nb % 2 == 0)
	{
		return (ft_find_next_prime(nb + 1));
	}
	else
	{
		return (ft_find_next_prime(nb + 2));
	}
}
