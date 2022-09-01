/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 10:31:07 by avillard          #+#    #+#             */
/*   Updated: 2022/08/25 15:28:06 by avillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	j;

	if (min >= max)
		return (0);
	i = 0;
	j = min - 1;
	while (++j <= max)
		++i;
	tab = malloc(sizeof(int) * (i - 1));
	j = 0;
	while (--i > 0)
	{
		tab[j] = min + j;
		++j;
	}
	return (tab);
}
