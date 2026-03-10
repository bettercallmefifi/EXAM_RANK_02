#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	char *str = argv[1];
	if (argc == 2)
	{
		while (str[i])
			i++;
		i -= 1;
		while(i >= 0 && (str[i] == ' ' || str[i] == '\t'))
			i--;
		while(str[i] != ' ' && str[i] != '\t' && i >= 0)
			i--;
		i += 1;
		while(str[i] && str[i] != ' ' && str[i] != '\t')
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}