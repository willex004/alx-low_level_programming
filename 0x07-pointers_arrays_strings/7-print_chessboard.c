#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - print chessboard
 * @a: pointer
 */

void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; a[b][7]; b++)
	{
		for (b = 0; c < 8; c++)
			_putchar(a[b][c]);
		_putchar('\n');
	}
}
