#include "main.h"

/**
 * swap int -swap two integers values using
 *           two inputs
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
