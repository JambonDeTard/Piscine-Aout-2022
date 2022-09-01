#include <unistd.h>
int	ft_sqrt(int nb)
{
	int i = 0;

	while (nb > 0)
	{
		nb = nb - (2 * i + 1);
		i++;
	}
	return (i);
}

void putnbr(int somme)
{
	if (somme <= 9)
		write(1, &somme + '0',1);
	if (somme > 9)
	{
		putnbr(somme / 10);
		putnbr(somme % 10);
	}
	write(1, "\n",1);
}

int main (int ac, char **av)
{
	int	i;
	int nb;
	int sqrt;
	int somme;

	somme = 0;
	nb = 3;
	if (ac == 2)
	{
		while (nb <= av[1][0] - '0')
		{
			sqrt = ft_sqrt(nb);
			i = 1;
			while ((2 * i) < sqrt)
			{
				if (nb % (2 * i + 1) == 0)
					somme += nb;
				i++;
			}
			nb += 2;
		}
		somme += 2;
		putnbr(somme);
	}
	else if (av[1] - '0' < 0)
		write(1, "0\n", 2);
	return (0);
}

			

