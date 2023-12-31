#include "main.h"

/**
 * set_bit - set bit
 * @n: number
 * @index: bit to set
 *
 * Return: 1 if successful, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
