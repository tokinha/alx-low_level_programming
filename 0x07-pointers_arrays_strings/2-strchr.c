#include "main.h"

/**
 * *_strchr - fill memory with constant byte
 * @s: pointer
 * @c: constant
 * Return: pointer to s
 */

char *_strchr(char *s, char c)
{
	int mor;

	for (mor = 0; s[mor] >= '\0' ; mor++)
	{
		if (s[mor] == c)
		{
			return (s + mor);
		}
	}

	return ('\0');
}
