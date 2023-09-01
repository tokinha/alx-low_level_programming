#include "main.h"

/**
 * _strpbrk - search a string
 * @s: string
 * @accept: string to match
 * Return: pointer to byte or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int mor, tor;
	char *o;

	mor = 0;
	while (s[mor] != '\0')
	{
		tor = 0;
		while (accept[tor] != '\0')
		{
			if (accept[tor] == s[mor])
			{
				o = &s[mor];
				return (o);
			}
			tor++;

		}
		mor++;
	}

	return (0);
}
