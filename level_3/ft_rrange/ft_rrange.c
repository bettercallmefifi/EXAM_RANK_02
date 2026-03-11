#include <stdlib.h>

int *ft_rrange(int start, int *end)
{
	int i = 0;
	int *res;
	int n = start - end;

	if (n < 0)
		n = -n;
	n += 1;
	res = malloc(sizeof(int) * n);
	if (!res)
		return (NULL)

	while (i < n)
	{
		if (end > start)
		{
			res[i] = start;
			start++;
			i++;
		}
		else
		{
			res[i] = start;
			i++;
			start--;
		}
	}
	return(res);
}