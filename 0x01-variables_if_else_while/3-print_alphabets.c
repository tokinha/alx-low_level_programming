#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char c = 'a';
	char C = 'A';
	/*print a - z */
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	/*print A -Z */
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');

	return (0);
}
