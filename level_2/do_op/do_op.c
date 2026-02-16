#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int n1;
	int n2;
	int result;
	char *rest[33];
	int i = 0;
	if (argc == 4)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);

		if (argv[2][0] == '+')
			result = n1 + n2;
		else if (argv[2][0] == '-')
			result = n1 - n2;
		else if (argv[2][i] == '*')
			result = n1 * n2;
		else if (argv[2][0] == '/' && n2 != 0)
			result = n1 / n2;
		else if (argv[2][0] == '%' && n2 != 0)
			result = n1 % n2;
		
		if (result < 0)
		{
			write(1, "-", 1);
			result = -result;
		}
		while(result > 0)
		{
			rest[i] = (result % 10) + '0';
			result = result / 10;
			i++;
		}
		if (i == 0)
		{
			rest[i++] = '0';
		}
	}
}