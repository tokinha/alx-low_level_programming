#include "main.h"

/**
 * _strspn - gets length
 *
 * @s: string
 * @accept: bytes
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int mor, tor;

	for (mor = 0; s[mor] != '\0'; mor++)
	{
		for (tor = 0; accept[tor] != s[mor]; tor++)
		{
			if (accept[tor] == '\0')
				return (mor);
		}
	}
	return (mor);
}
