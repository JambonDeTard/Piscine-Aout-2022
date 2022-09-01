/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 09:23:50 by avillard          #+#    #+#             */
/*   Updated: 2022/08/26 12:08:33 by avillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_sep_len(char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
		++i;
	return (i);
}

int	ft_strslen(char **strs, char *sep, int size)
{
	int	len;
	int	sep_len;
	int	i;
	int	j;

	len = 0;
	sep_len = ft_sep_len(sep);
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			++j;
		len += j;
		if (i > 0)
			len += sep_len;
		++i;
	}
	return (len);
}

void	ft_fill_str(int size, char **strs, char *sep, char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			str[k] = strs[i][j];
			++k;
			++j;
		}
		j = 0;
		while (sep[j] && i < size - 1)
		{
			str[k] = sep[j];
			++k;
			++j;
		}
		++i;
	}
	str[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;

	if (size == 0)
	{
		str = malloc(sizeof(char) * 1);
		str[0] = '\0';
		return (str);
	}
	i = ft_strslen(strs, sep, size);
	str = malloc(sizeof(char) * (i + 1));
	ft_fill_str(size, strs, sep, str);
	return (str);
}
