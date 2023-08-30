#include "main.h"

/**
 * *_memset - fills memory with constant byte
 * @s: pointer
 * @b: constant
 * @n: max bytes to use
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int mor;

	for (mor = 0; n > 0; mor++, n--)
	{
		s[mor] = b;
	}

	return (s);
}
