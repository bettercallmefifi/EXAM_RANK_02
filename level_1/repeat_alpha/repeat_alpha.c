#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int index;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if ((argv[1][i] >='a' && argv[1][i] <= 'z'))
			{
				index = argv[1][i] - 'a' + 1;
				while (index > 0)
				{
					write(1, &argv[1][i], 1);
					index--;
				}
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				index = argv[1][i] - 'A' + 1;
				while (index > 0)
				{
					write(1, &argv[1][i], 1);
					index--;
				}
			}
			else
				write(1 ,&argv[1][i], 1);
			i++;
		}
	}
	write(1,"\n", 1);
	return (0);
}