#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: memory area
 * @src: source
 * @n: length of src to be copied
 *
 * Return: the pointer to dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int mor;

	for (mor = 0; mor < n; mor++)
	{
		dest[mor] = src[mor];
	}
	return (dest);
}
