#include <unistd.h>

void	print_bits(unsigned char octet)
{
    int maxbits = 8;
    unsigned char bit;
    while (maxbits--)
	{
        bit = (octet >> maxbits & 1) + '0';
        write(1, &bit, 1);
    }
}