#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * example
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 *
*/

void time_tables(void)
{
	int n, mult, prod;

	for (n = 0; n <= 9; n++)
	{
		_putchar(48);
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = n * mult;

			/*
			 * put space if product is single number
			 * place first digit if its two numbers
			*/
			if (prod <= 9)
				_putchar(' ');
			else
				 _putchar((prod / 10) + 48); /*get first digit*/
			_putchar((prod % 10) + 48); /*get second digit*/
		}
		_putchar('\n');
	}
}
