/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 11:07:50 by avillard          #+#    #+#             */
/*   Updated: 2022/08/29 17:10:23 by avillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	output;

	output = 1;
	i = 0;
	while (i < length - 1 && output)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			output = 0;
		i++;
	}
	if (output != 1)
	{
		output = 1;
		i = 0;
		while (i < length - 1)
		{
			if ((*f)(tab[i], tab[i + 1]) > 0)
				return (0);
			i++;
		}
	}
	return (1);
}
