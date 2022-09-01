#include <unistd.h>
int main (int ac, char **av)
{
	if (ac == 2)
	{
		int	i;
		int j;
		int repeat;

		i = 0;
		while (av[1][i] != '\0')
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				repeat = av[1][i] - 'a';
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				repeat = av[1][i] - 'A';
			else
				repeat = 0;
			j = 0;
			while (j <= repeat)
			{
				write(1, &av[1][i], 1);
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
