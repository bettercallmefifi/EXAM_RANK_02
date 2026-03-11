#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int start;
	int end;

	if (argc == 2)
	{
		while(argv[1][i])
		{
			while (argv[1][i] == ' ' || argv[1][i] == '\t')
				i++;
			start = i;
			while(argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i])
				i++;
			end = i;
			while (start < end)
			{
				write(1, &argv[1][start], 1);
				start++;
			}
			while (argv[1][i] == ' ' || argv[1][i] == '\t')
				i++;
			if (argv[1][i])
				write(1, "   ", 3);
		}
	}
	write(1, "\n", 1);
	return(0);
}