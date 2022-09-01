/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 09:50:18 by avillard          #+#    #+#             */
/*   Updated: 2022/08/22 17:30:04 by avillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

static char	*ft_strdup(char *src)
{
	int				i;
	char			*dst;

	i = 0;
	while (src[i])
		i += 1;
	dst = (char *)malloc(sizeof(char) * (i + 1));
	if (!(dst))
		return (NULL);
	i = -1;
	while (src[++i])
		dst[i] = src[i];
	dst[i] = '\0';
	return (dst);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	int				j;
	t_stock_str		*stk;

	stk = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!(stk))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			j++;
		stk[i].size = j;
		stk[i].str = av[i];
		stk[i].copy = ft_strdup(av[i]);
		i += 1;
	}
	stk[i].str = 0;
	return (stk);
}
