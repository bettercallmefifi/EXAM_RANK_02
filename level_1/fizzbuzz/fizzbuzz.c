#include <unistd.h>

int main()
{
	int n = 0;
	char n1;
	char n2;
	while (n <= 100)
	{
		if (n % 3 == 0)
			write(1, "fizz", 4);
		else if(n % 5 == 0)
			write(1, "buzz", 4);
		else
		{
			if (n > 9)
			{
				n1 = n / 10 + '0';
				n2 = n % 10 + '0';

				write (1, &n1, 1);
				write(1, &n2, 1);
			}
			else if (n <= 9)
			{
				n1 = n % 10 + '0';
				write(1, &n1, 1);
			}
		}
		write(1,"\n", 1);
		n++;
	}
	return (0);
}