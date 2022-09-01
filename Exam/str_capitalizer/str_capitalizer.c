#include <unistd.h>
int main(int ac, char **av)
{
	int i = 0;
	int j;
	
	if (ac == 1)
		write(1, "\n", 1);
	else
	{
		j = 1;
		while (j < ac)
		{
			i = 0;
			while (av[j][i] != '\0')
			{
				if (i == 0 && (av[j][i] <= 'a' && av[j][i] >= 'z'))
					write(1, &av[j][i] - 32, 1);
				else if ((av[j][i - 1] == '\t' || av[j][i - 1] == ' ')
					&& (av[j][i] <= 'a' && av[j][i] >= 'z'))
					write(1, &av[i][j] - 32, 1);
				else if ((av[j][i - 1] != '\t' || av[j][i - 1] != ' ')
					&& (av[j][i] <= 'A' && av[j][i] >= 'Z'))
					write(1, &av[i][j] + 32, 1);
				else
					write(1, &av[i][j], 1);
				i++;
			}
			write(1, "\n", 1);
			j++;
		}
	}
	return (0);
}
