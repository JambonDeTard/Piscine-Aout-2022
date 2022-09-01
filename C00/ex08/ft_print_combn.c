/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 09:25:26 by avillard          #+#    #+#             */
/*   Updated: 2022/08/11 17:55:38 by avillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_me_cago(int *arr, int col, int n)
{
	int	i;

	while (col)
	{
		while (arr[col] == (9 + col - (n - 1)) && col >= 0)
			col -= 1;
		if (col < 0)
			break ;
		arr[col] += 1;
		i = (col + 1) - 1;
		while (i++ < n)
			arr[i] = arr[i - 1] + 1;
		col = n - 1;
		ft_putchar(',');
		ft_putchar(' ');
		i = 0;
		while (i < n)
			ft_putchar(arr[i++] + '0');
	}
}

void	ft_print_combn(int n)
{
	int	arr[100];
	int	i;
	int	col;

	col = n - 1;
	if (n > 10)
		return ;
	i = -1;
	while (i++ < n)
		arr[i] = i;
	i = 0;
	while (i < n)
		ft_putchar(arr[i++] + '0');
	ft_me_cago(arr, col, n);
}
