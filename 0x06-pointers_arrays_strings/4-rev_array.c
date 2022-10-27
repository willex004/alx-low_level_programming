#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elemnts in the array
 * Return: rev
 */

void reverse_array(int *a, int n)
{
	int b, c;

	for (b = 0; b < n; b++)
	{
		n--;
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}
