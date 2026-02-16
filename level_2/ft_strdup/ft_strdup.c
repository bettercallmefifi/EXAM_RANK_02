#include <stdlib.h>

char *ft_strdup(char *str)
{
	char *dup;
	int len = 0;
	int i = 0;
	while (str[len])
		len++;
	dup = (char *)malloc(sizeof(char *) * (len + 1));
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return(dup);
}