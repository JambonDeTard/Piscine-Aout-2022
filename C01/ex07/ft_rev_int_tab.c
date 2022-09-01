/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 11:43:49 by avillard          #+#    #+#             */
/*   Updated: 2022/08/15 16:05:24 by avillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	swp(int *src, int *dest)
{
	int	temp;

	temp = *src;
	*src = *dest;
	*dest = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	ja;

	i = 0;
	ja = size - 1;
	while (i < ja)
	{
		swp(&tab[i], &tab[ja]);
		i++;
		ja--;
	}
}
