/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 10:02:00 by avillard          #+#    #+#             */
/*   Updated: 2022/08/30 15:53:45 by avillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "includes/ft.h"

void	doop(int argc, char *argv[])
{
	int	result;

	(void) argc;
	result = ft_atoi(argv[1]);
	if (*argv[2] == '+')
		ft_putnbr(result += ft_atoi(argv[3]));
	else if (*argv[2] == '-')
		ft_putnbr(result -= ft_atoi(argv[3]));
	else if (*argv[2] == '*')
		ft_putnbr(result *= ft_atoi(argv[3]));
	else if (*argv[2] == '/')
		ft_putnbr(result /= ft_atoi(argv[3]));
	else if (*argv[2] == '%')
		ft_putnbr(result %= ft_atoi(argv[3]));
	else if (*argv[2] == '=')
		ft_putnbr(1);
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		if (*av[2] == '/' && *av[3] == '0')
			write(1, "Stop : division by zero\n", 24);
		else if (*av[2] == '%' && *av[3] == '0')
			write(1, "Stop : modulo by zero\n", 23);
		else
			doop(ac, av);
	}
	return (0);
}
