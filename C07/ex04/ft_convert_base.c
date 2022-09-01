/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 13:54:16 by avillard          #+#    #+#             */
/*   Updated: 2022/08/23 11:03:55 by avillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	error_base(char *base);
int	ft_atoi_base(char *str, char *base);

int	ft_strlen_base(long nb, char *base)
{
	int	return_len;
	int	base_len;

	return_len = 1;
	base_len = ft_strlen(base);
	if (nb < 0)
	{
		nb *= -1;
		++return_len;
	}
	while (nb >= base_len)
	{
		nb /= base_len;
		++return_len;
	}
	return (return_len);
}

char	*ft_itoa_base(char *return_nbr, long nbr, char *base)
{
	int	i;
	int	base_size;

	base_size = ft_strlen(base);
	i = ft_strlen_base(nbr, base) - 1;
	return_nbr[i + 1] = '\0';
	if (nbr < 0)
	{
		return_nbr[0] = '-';
		nbr *= -1;
	}
	while (nbr >= base_size)
	{
		return_nbr[i] = base[nbr % base_size];
		nbr /= base_size;
		--i;
	}
	return_nbr[i] = base[nbr];
	return (return_nbr);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*return_nbr;
	long	nb;

	if (error_base(base_from) == 1 || error_base(base_to) == 1)
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	return_nbr = malloc(sizeof(char) * (ft_strlen_base(nb, base_to) + 1));
	return_nbr = ft_itoa_base(return_nbr, nb, base_to);
	return (return_nbr);
}
