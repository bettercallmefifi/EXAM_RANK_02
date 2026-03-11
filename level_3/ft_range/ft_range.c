#include <stdlib.h>

int *ft_range(int start, int end)
{
	int len;
	int i = 0;
	int *res;

	if (start >= end)
		len = start - end + 1;
	else if (end > start)
		len = end - start + 1;
	res = malloc(sizeof(int) * len);
	while (i < len)
	{
		if (start < end)
		{
			res[i] = start;
			start++;
			i++;
		}
		else
		{
			res[i] = start;
			start--;
			i++;
		}
	}
	return (res);
}