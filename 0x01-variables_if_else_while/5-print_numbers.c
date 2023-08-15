#include <stdio.h>

/**
 * main -entry point
 *
 * Description: print all single digit number
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	for (int digit = 0 ; digit <= 9 ; digit++)
	{
		printf("%i", digit);
	}
	printf("\n");

	return (0);
}
