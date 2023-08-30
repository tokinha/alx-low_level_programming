#include "main.h"

/**
 * print_chessboard - prints chess board
 *
 * @a: rows
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int mor, tor;

	for (mor = 0; mor < 8; mor++)
	{
		for (tor = 0; tor < 8; tor++)
		{
			_putchar(a[mor][tor]);
		}
		_putchar('\n');
	}
}
