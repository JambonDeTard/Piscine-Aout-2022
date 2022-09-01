/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 13:54:23 by avillard          #+#    #+#             */
/*   Updated: 2022/08/23 11:05:55 by avillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

int	error_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-'
			|| (base[i] >= 9 && base[i] <= 13) || base[i] == 32)
			return (1);
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				return (1);
			++j;
		}
		++i;
	}
	if (i <= 1)
		return (1);
	return (0);
}

int	is_str_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (0);
		++i;
	}
	return (1);
}

int	ft_put_in_dec(int i, char *str, char *base)
{
	int	j;

	j = 0;
	while (str[i] != base[j])
		++j;
	while (is_str_in_base(str[i + 1], base) == 0)
	{
		j *= (ft_strlen(base));
		++i;
	}
	return (j);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	is_negative;
	int	return_value;

	i = 0;
	is_negative = 1;
	return_value = 0;
	if (error_base(base) == 1)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		++i;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			is_negative *= -1;
		++i;
	}
	while (is_str_in_base(str[i], base) == 0)
	{
		return_value += ft_put_in_dec(i, str, base);
		++i;
	}
	return_value *= is_negative;
	return (return_value);
}
