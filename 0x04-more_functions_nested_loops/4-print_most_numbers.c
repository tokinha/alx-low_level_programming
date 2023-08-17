#include "main.h"

/**
 * print_most_numbers - print 0 - 9 apart
 *               from 2 and 4 and you can only
 *               use _putchar twice
 *
 * Return: always 0 (success)
*/

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
			continue;
		_putchar(n + 48);
	}
	_putchar('\n');
}
