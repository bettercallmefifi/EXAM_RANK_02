#include <unistd.h>

int ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}

void ft_putnbr(int n)
{
	int i = 0;
	long long nbr;
	char rest[33];

	nbr = n;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -n;
	}
	while (nbr >= 10)
	{
		rest[i] = nbr % 10 + '0';
		nbr /= 10;
		i++;
	}
	if (nbr <= 9)
		rest[i] = nbr + '0';
	while (i >= 0)
	{
		write(1, &rest[i], 1);
		i--;
	}
}

int ft_isprime(int n)
{
	int div = 2;
	if (n < 0)
		return (0);
	while (n / 2 >= div)
	{
		if (n % div == 0)
			return (0);
		div++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int n = ft_atoi(argv[1]);
		int sum = 0;
		while (n > 1)
		{
			if (ft_isprime(n))
				sum += n;
			n--;
		}
		ft_putnbr(sum);
		write(1, "\n", 1);
	}
	else
	{
		write(1, "0\n", 2);
		return (0);
	}
}