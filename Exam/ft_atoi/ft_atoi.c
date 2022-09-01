int	ft_atoi(const char *str)
{
	int	i;
	int nbr;
	int sign;

	i = 0;
	nbr = 0;
	sign = 1;
	while (str[i] == '\t' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
	}
	return (sign * nbr);
}

#include <stdio.h>
int main ()
{
	printf("%d\n", ft_atoi("   -9774QTW "));
	return (0);
}
