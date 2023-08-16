#include "main.h"

/**
 * main -entry point
 *
 * Description: print 1st 50 fibonacci numbers
 *              start with 1 & 2 folled by new line
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int c;
	unsigned long f1 = 0, f2 = 1, sum;

	for (c = 0; c < 50; c++)
	{
		sum = f1 + f2;
		printf("%lu", sum);

		f1 = f2;
		f2 = sum;

		if (c == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
