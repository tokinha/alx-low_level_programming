#include "main.h"

/**
 * strlen_recursion - returns length of a string
 * @s: pointer to string
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int mor = 0;

	if (*s > '\0')
	{
		mor += _strlen_recursion(s + 1) + 1;
	}

	return (mor);
}
