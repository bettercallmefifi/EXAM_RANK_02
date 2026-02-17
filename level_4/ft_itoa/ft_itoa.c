#include <stdlib.h>
#include <stddef.h>

int ft_strlen(char *str)
{
	int i= 0;
	while (str[i])
		i++;
	return (i);
}

int	len_num(int n)
{
	int len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n)
	{
		len++;
		n /= 10; 
	}
	return (len);
}

char *ft_strrev(char *str)
{
	int end = ft_strlen(str) - 1;
	int start = 0;
	char tmp;

	while (start < end)
	{
		tmp = str[start];
		str[start] = str[end];
		str[end] = tmp;
		start++;
		end--;
	}
	return(str);
}

char *ft_itoa(int n)
{
	unsigned int nbr;
	size_t i;
	size_t len;
	char *num;

	len = len_num(n);
	i = 0;
	nbr = n;
	if (n < 0)
		nbr = -n;
	num = malloc(sizeof(char) *(len + 1));
	if (!num)
		return(NULL);
	while(nbr > 0)
	{
		num[i] = (nbr % 10) + '0';
		nbr /= 10;
		i++;
	}
	if (n == 0)
		num[0] = '0';
	if (n < 0)
		num [len - 1] = '-';
	num[len] = '\0';
	return(ft_strrev(num));
}