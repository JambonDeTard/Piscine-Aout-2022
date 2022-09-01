/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:28:09 by avillard          #+#    #+#             */
/*   Updated: 2022/08/15 16:11:42 by avillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	storage;

	storage = *a;
	*a = *b;
	*b = storage;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	enough;

	i = size;
	while (i > 0)
	{
		enough = 1;
		j = 0;
		while (j < i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				ft_swap (&tab[j], &tab[j + 1]);
				enough = 0;
			}
			j++;
		}
		i--;
		if (enough == 1)
		{
			break ;
		}
	}
}
