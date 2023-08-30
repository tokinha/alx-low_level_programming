#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - description
 * @a: 2d array of int types
 * @size: size of array (square)
 */

void print_diagsums(int *a, int size)
{
	int mor, t1 = 0, t2 = 0;

	for (mor = 0; mor < size; mor++)
	{
		t1 += a[mor];
		t2 += a[size - mor - 1];
		a += size;
	}
	printf("%d, ", t1);
	printf("%d\n", t2);
}
