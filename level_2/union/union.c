#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	char *s1 = argv[1];
	char *s2 = argv[2];
	char seen[256] = {0};

	if (argc == 3)
	{
		while (s1[i])
		{
			if (!seen[(unsigned char)s1[i]])
			{
				seen[(unsigned char)s1[i]] = 1;
				write(1, &s1[i], 1);
			}
			i++;
		}
		while (s2[j])
		{
			if (!seen[(unsigned char)s2[j]])
			{
				seen[(unsigned char)s2[j]] = 1;
				write(1, &s2[j], 1);
			}
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}