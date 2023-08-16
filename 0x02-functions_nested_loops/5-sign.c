#include "main.h"

/**
 * print_sign - print + if n is greater than zero ,
 * 0 if n is zero and - if n less than zero
 *
 * @n: takes integer type input
 *
 * Return: 1 if + , 1 if - and 0 if 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
