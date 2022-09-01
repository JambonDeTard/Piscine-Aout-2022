/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 11:04:08 by avillard          #+#    #+#             */
/*   Updated: 2022/08/13 11:09:18 by avillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	ja;

	i = 0;
	ja = 0;
	while (dest[i])
		i++;
	while ((ja < nb) && src[ja])
	{
		dest[i + ja] = src[ja];
		ja++;
	}
	dest[i + ja] = '\0';
	return (dest);
}
