#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -prints diagonal sums fro arrays
 * @a: array
 * @size: array size
 */

void print_diagsums(int *a, int size)
{
	int b, s1, s2;

	s1 = s2 = 0;
	for (b = 0; b < size; b++)
	{
		s1 += a[b];
		a += size;
	}
	a -= size;
	for (b = 0; b < size; b++)
	{
		s2 += a[b];
		a -= size;
	}
	printf("%d, %d\n", s1, s2);
}
