#include "main.h"

/**
 * flip_bits - transform no. to another
 *
 * @n: 1st no.
 * @m: 2nd no.
 *
 * Return: no. of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorv = n ^ m;
	unsigned int c = 0;

	while (xorv)
	{
		if (xorv & 1ul)
			c++;
		xorv = xorv >> 1;
	}
	return (c);
}
