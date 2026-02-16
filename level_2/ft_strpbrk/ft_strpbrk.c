#include <stdio.h>
#include <string.h>
char	*ft_strpbrk(char *s1, char *s2)
{
	int i = 0;
	int j;

	while (s1[i])
	{
		j = 0;
		while(s2[j])
		{
			if (s1[i] == s2[j])
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return(NULL);
}
int main()
{
	char str[] = "ferdaous";
	char src[] = "er";

	printf("%p\n", strpbrk(str, src));
	printf("%p\n", ft_strpbrk(str, src));
	return(0);
}