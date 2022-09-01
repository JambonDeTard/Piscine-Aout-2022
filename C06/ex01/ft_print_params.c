/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:18:23 by avillard          #+#    #+#             */
/*   Updated: 2022/08/16 14:25:11 by avillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	o;

	i = 0;
	o = 1;
	while (--argc)
	{
		while (argv[o][i])
			ft_putchar(argv[o][i++]);
		i = 0;
		o += 1;
		ft_putchar('\n');
	}
	return (0);
}
