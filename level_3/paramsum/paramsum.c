#include <unistd.h>

void	ft_putnbr(int n)
{
	long long nbr;
	char rest[33];
	int i = 0;

	nbr = n;
	while (nbr >= 10)
	{
		rest[i] = nbr % 10 + '0';
		nbr = nbr / 10;
		i++;
	}
	if (nbr < 10)
		rest[i] = nbr + '0';
	while (i >= 0)
	{
		write(1, &rest[i], 1);
		i--;
	}
}

int main(int argc, char **argv)
{
	ft_putnbr(argc - 1);
	write(1, "\n", 1);
	return(0);
}
