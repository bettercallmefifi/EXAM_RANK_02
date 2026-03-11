int get_value(char c, int base)
{
	if(c >= '0' && c <= '9')
		return (c - '0');
	if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int sign = 1;

	if (st[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	int result = 0;
	int value;
	while (str[i])
	{
		value = get_value(str[i], str_base);
		if (value < 0 || value >= str_base)
			break;
		result = result * str_base + value;
		i++;
	}
	return (result * sign);
}