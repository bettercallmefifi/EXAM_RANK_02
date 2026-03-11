#include <unistd.h>
void ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr( n / 10);
	char c = n % 10 + '0';
	write(1, &c, 1);
}
int ft_atoi(char *str)
{
	int res = 0;
	int i = 0;
	int sign = 1;
	
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
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (sign * res);
}

int main(int argc, char **argv)
{
	int i = 1;
	if (argc == 2)
	{
		int nb = ft_atoi(argv[1]);
		while(i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(nb);
			write(1, " = ", 3);
			ft_putnbr(i * nb);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}