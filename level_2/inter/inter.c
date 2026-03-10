int ft_strchr(char *s2, char c)
{
	int i = 0;
	while (s2[i])
	{
		if (s2[i] == c)
			return (1);
		i++;
	}
	return (0);
}
int main(int argc, char **argv)
{
	char seen[256] = {0};
	int i = 0;
	int j = 0;

	if (argc == 3)
	{
		*s1 = *argv[1];
		*s2 = *argv[2];
		while(s1[i])
		{
			if (!seen[(unsigned char)s1[i]] && ft_strchr(s2, s1[i]))
			{
				write(1, &s1[i], 1);
				seen[(unsigned char)s1[i]] = 1;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}