#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int a, trian;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (trian = size - a; trian > 0; trian--)
				_putchar(' ');

			for (trian = 0; trian < a; trian++)
				_putchar('#');

			if (a == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}

