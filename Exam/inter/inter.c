/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 10:22:54 by avillard          #+#    #+#             */
/*   Updated: 2022/09/01 10:51:49 by avillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcmp_all(char *str, char comp)
{
	int i = 0;
	int flag = 0;
	while (str[i])
	{
		if (str[i] == comp)
		{
			flag += 1;
			return (flag);
		}
		i++;
	}
	return (flag);
}

int	ft_strcmp_actual(char *str, char comp, int x)
{
	int i = 0;
	while (i < x) //peut etre enlever le =
	{
		if (str[i] == comp)
			return (1);
		i++;
	}
	return (0);
}

int main (int ac, char **av)
{
	int i;
	int j;

	if (ac == 3)
	{
		i = 0;
		while (av[1][i])
		{
			if (ft_strcmp_actual(av[1], av[1][i], i) == 0)
				write(1, &av[1][i], 1);
			i++;
		}
		j = 0;
		while (av[2][j])
		{
			if (ft_strcmp_actual(av[2], av[2][j], j) == 0
					&& ft_strcmp_all(av[1], av[2][j]) == 0)
				write (1, &av[2][j], 1);
			j++;
		}
	}
	write (1, "\n", 1);
	return (0);
}


		
