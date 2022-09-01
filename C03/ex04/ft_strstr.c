/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 11:11:06 by avillard          #+#    #+#             */
/*   Updated: 2022/08/13 11:18:28 by avillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	ja;

	i = 0;
	ja = 0;
	if (!to_find[0])
		return (str);
	while (str[i])
	{
		while ((str[i + ja] == to_find[ja]) && to_find[ja])
			ja++;
		if (!to_find[ja])
			return (&str[i]);
		ja = 0;
		i++;
	}
	return (0);
}
