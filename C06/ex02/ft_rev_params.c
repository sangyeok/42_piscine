#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (argc <= 0)
		return (0);
	while (argv[i])
		i++;
	while (i - 1 > 0)
	{
		i--;
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
