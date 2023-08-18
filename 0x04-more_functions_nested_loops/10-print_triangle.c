#include "main.h"

/**
 * print_triangle - print a triangle
 *
 * @size: size of a triangle
 *
 * Return: always 0 (success)
*/

void print_triangle(int size)
{
	int h, b;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (h = 1; h <= size; h++)
		{
			for (b = 1; b <= size; b++)
			{
				if ((h + b) <= s)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
