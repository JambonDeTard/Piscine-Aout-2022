/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 09:26:29 by avillard          #+#    #+#             */
/*   Updated: 2022/08/31 09:50:38 by avillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		if (av[2][0] == '+')
			printf("%d\n", (atoi(av[1]) + atoi(av[3])));
		if (av[2][0] == '-')
			printf("%d\n", (atoi(av[1]) - atoi(av[3])));
		if (av[2][0] == '*')
			printf("%d\n", (atoi(av[1]) * atoi(av[3])));
		if (av[2][0] == '/')
			printf("%d\n", (atoi(av[1]) / atoi(av[3])));		
		if (av[2][0] == '%')
			printf("%d\n", (atoi(av[1]) % atoi(av[3])));
	}
	else
		printf("\n");
	return (0);
}
