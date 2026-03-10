#include <unistd.h>
void print_word(char *str, int start, int end)
{
	while(start < end)
	{
		write(1, &str[start], 1);
		start++;
	}
}
int main(int argc, char **argv)
{
	if (argc < 1 || !argv[1][0])
	{
		write(1, "\n", 1);
		return (0);
	}

	int start = 0;
	int end = 0;
	int first_word_end = 0;
	char *str = argv[1];

	while(str[start] == ' ' || str[start] == '\t')
		start++;
	end = start;
	while(str[end] && str[end] != '\t' && str[end] != ' ' )
		end++;
	first_word_end = end;
	while (str[end])
	{
		while(str[end] == ' ' || str[end] == '\t')
			end++;
		int word_start = end;
		while(str[end] != ' ' && str[end] != '\t' && str[end])
			end++;
		if(word_start < end)
		{
			print_word(str, word_start, end);
			write(1, " ", 1);
		}
	}
	print_word(str, start, first_word_end);
	write(1, "\n", 1);
	return (0);
}