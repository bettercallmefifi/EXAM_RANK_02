#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int n1;
	int n2;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);

		if (n1 > 0 && n2 > 0)
		{
			while ( n2 != 0)
			{
				int tmp;
				tmp = n1 % n2;
				n1 = n2;
				n2 = tmp;
			}
			printf("%d",n1);
		}
	}
	printf("\n");
	return (0);
}
