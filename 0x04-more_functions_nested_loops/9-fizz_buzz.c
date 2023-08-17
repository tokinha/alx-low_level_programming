#include "main.h"

/**
 * main - print number 1 - 100 followed by new line
 *              number that are multiples of 3 print fizz
 *              number that are multiples of 5 print buzz
 *              number that are multiples of both print fizzbuzz
 *              each number and word to be separated by space
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && !(n % 5 == 0))
			printf("Fizz");
		else if (n % 5 == 0 && !(n % 3 == 0))
			printf("Buzz");
		else if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", n);

		if (n != 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
