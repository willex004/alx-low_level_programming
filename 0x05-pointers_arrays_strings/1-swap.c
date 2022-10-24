#include "main.h"

/**
 * swap_int - swaps the values of two integer
 * @a: int a
 * @b: int b
 */

void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
